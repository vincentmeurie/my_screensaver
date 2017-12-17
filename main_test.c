/*
** EPITECH PROJECT, 2017
** main
** File description:
** main for screensaver
*/

#include "test.h"

void            event_handler(t_display *dp)
{
	sfEvent       event;
	sfColor       color;
	int           b;

	while (sfRenderWindow_pollEvent(dp->window, &event)) {
		if (event.key.code == sfKeyEscape ||event.type == sfEvtClosed)
			sfRenderWindow_close(dp->window);
		sfRenderWindow_clear(dp->window, sfBlack);
		clear_frame(dp->image);
		if (event.type == sfEvtKeyPressed || event.type == sfEvtKeyReleased) {
			if (event.key.code == sfKeyLShift)
				b = 1;
		}
	}
	anim1(dp->image);
	sfTexture_updateFromPixels(dp->texture, dp->image->pixels, dp->image->width, dp->image->height, 0, 0);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfRenderWindow_clear(dp->window, sfBlack);
	sfSprite_setTexture(dp->sprite, dp->texture, sfTrue);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfRenderWindow_display(dp->window);
}

void    update(t_display *dp, sfColor color)
{
	sfVector2f from;
	sfVector2f to;
	int i = 0;

	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfTexture_updateFromPixels(dp->texture, dp->image->pixels, dp->image->width, dp->image->height, 0, 0);
	sfSprite_setTexture(dp->sprite, dp->texture, sfTrue);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	while (sfRenderWindow_isOpen(dp->window)) {
		event_handler(dp);
		sfRenderWindow_display(dp->window);
		if (i % 100 == 0)
			anim1(dp->image);
		i++;
	}
}

int             main(int ac, char **av)
{
	t_display     display;
	sfColor       color;

	if (init_display(&display) == -1 || ac != 2)
		return (84);
	if (my_strcmp("-h", av[1]) == 0)
		dp_help();
	else if (my_getnbr(av[1]) == 1)
		update(&display, color);
	else if (my_getnbr(av[1]) == 2)
		update1(&display, color);
	else if (my_getnbr(av[1]) == 3)
		update2(&display, color);
	else
		return (84);
	clear_display(&display);
	return (0);
}
