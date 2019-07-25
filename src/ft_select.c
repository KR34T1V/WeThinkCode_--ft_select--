#include "../inc/ft_select.h"

int		main(int ac, char **av)
{
	if (ac < 2)
		show_help();
	else
		ft_printf("%s", av[1]);
	return (0);
}