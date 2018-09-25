/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 11:59:55 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/21 19:40:28 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 500
# define BOLEAN int
# define TRUE 1
# define FALSE 0

# include <inttypes.h>
# include <dirent.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <wchar.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char				*ft_strcpy(char *dst, char const *src);
char				*ft_itoa(int n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strncat(char *s1, char const *s2, size_t n);
char				**ft_strsplit(char const *s, char c);
char				**ft_strsplit_white(const char *s);
char				*ft_strcat(char *s1, char const *s2);
char				*ft_strchr(char const *s, int c);
char				*ft_strdup(char const *s1);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncpy(char *dst, char const *src, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strnstr(char const *h, char const *ndle, size_t len);
char				*ft_strrchr(char const *s, int c);
char				*ft_strstr(char const *haystack, char const *needle);
char				*ft_strtrim(char const *s);

int					ft_atoi(char const *str);
int					ft_isalnum(int n);
int					ft_isalpha(int n);
int					ft_isascii(int n);
int					ft_iscfound(char const *str, char const c);
int					ft_isdigit(int n);
int					ft_isdir(const char *path);
int					ft_isreg(const char *path);
int					ft_islower(int n);
int					ft_isspace(int n);
int					ft_isprint(int n);
int					ft_isupper(int n);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_toupper(int n);
int					ft_tolower(int n);
int					ft_wordcount(const char *s, char c);
int					ft_putwchar(wint_t wc);
int					ft_putwstr(wchar_t *ws);
int					get_next_line(int const fd, char **line);

size_t				ft_sizeof2d_char(char **t);
size_t				ft_strclen(char const *str, char c);
size_t				ft_strlcat(char *s1, char const *s2, size_t dstsize);
size_t				ft_strlen(char const *str);
size_t				ft_wordcount_white(const char *s);

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, void const *src, int c, size_t n);
void				*ft_memchr(void const *s, int c, size_t n);
void				*ft_memcpy(void *dst, void const *src, size_t n);
void				*ft_memmove(void *dst, void const *src, size_t len);
void				*ft_memset(void *mem, int c, size_t len);
void				ft_bzero(void *str, size_t n);
void				ft_free2d_char(char **array);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_memdel(void **ap);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putendl(char const *str);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putstr(char const *str);
void				ft_strclr(char *str);
void				ft_strdel(char **as);
void				ft_striter(char *str, void (*f)(char *));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));

#endif
