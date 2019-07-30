# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 20:26:51 by cterblan          #+#    #+#              #
#    Updated: 2019/07/30 23:41:10 by cterblan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################

AUTHOR = cterblan
OUTPUT = ft_select

################################################################################

INC_DIR = inc
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib
RES_DIR = resources

###############################################################################

SRC		:= ft_select
			
OBJ		:= $(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))

###############################################################################

PRINTF_DIR = $(LIB_DIR)/ft_printf
LIB_FLAGS = -lncurses

###############################################################################

CFLAGS	:= -Wall -Werror -Wextra -D_XOPEN_SOURCE=500
COMPILE	:= gcc $(CFLAGS)

###############################################################################

all: $(OUTPUT)

$(OUTPUT): $(OBJ)
	make all -C $(PRINTF_DIR)
	gcc -o $(OUTPUT) $(OBJ) $(PRINTF_DIR)/obj/* $(PRINTF_DIR)/lib/libft/obj/* $(LIB_FLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	#norminette $<
	mkdir -p $(OBJ_DIR)
	$(COMPILE) -I $(INC_DIR) -o $@ -c $<

update:
	#git submodule update --init --recursive --remote
	make all

clean: libclean
	rm -rf $(OBJ_DIR)

libclean:
	make clean -C $(PRINTF_DIR)

fclean: clean libfclean
	rm -f $(OUTPUT)

libfclean:
	make fclean -C $(PRINTF_DIR)

re: fclean all

workspace:
	mkdir -p $(INC_DIR)
	mkdir -p $(SRC_DIR)
	mkdir -p $(LIB_DIR)
	mkdir -p $(RES_DIR)
	touch $(RES_DIR)/references.txt
	touch author
	echo $(AUTHOR) > author

###############################################################################

.PHONEY := all clean fclean re workspace

.SILENT:

.PRECIOUS := author