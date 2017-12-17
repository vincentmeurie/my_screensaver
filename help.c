/*
** EPITECH PROJECT, 2017
** help
** File description:
** help for my screensaver
*/

//#include "test.h"
#include <unistd.h>


void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int i = 0;

	while (str && str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}

void	dp_help()
{
	my_putstr("animation rendering in a CSFML window.\n\n\n");
	my_putstr("USAGE\n");
	my_putstr(" ./my_screensaver [OPTIONS] animation_id\n");
	my_putstr("  animation_id    ID of the animation to process (between 1 and 3).\n\n");
	my_putstr("OPTIONS\n");
	my_putstr(" -d\t\tprint the description of all the animations and quit.\n");
	my_putstr(" -h\t\tprint the usage and quit.\n\n");
	my_putstr("USER INTERACTIONS\n");
	my_putstr(" LEFT_ARROW\tswitch to the previous animation.\n");
	my_putstr(" RIGHT_ARROW\tswitch to the next animation.\n\n");
}
