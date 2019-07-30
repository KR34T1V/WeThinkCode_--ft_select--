#include "../inc/ft_select.h"
# include <ncurses.h>

int		main()
{
	// show_help();
	
	initscr();
	// raw();
	cbreak();
	printw("Hello World");
	getch();
	endwin();
	return (0);
}