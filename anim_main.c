/*
** EPITECH PROJECT, 2017
** anim_main.c
** File description:
** gestion des grosses fonctions d'animations
*/

#include "test.h"

void	event_handler1(t_display *dp)
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
	anim2(dp->image);
	sfTexture_updateFromPixels(dp->texture, dp->image->pixels, dp->image->width, dp->image->height, 0, 0);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfRenderWindow_clear(dp->window, sfBlack);
	sfSprite_setTexture(dp->sprite, dp->texture, sfTrue);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfRenderWindow_display(dp->window);
}

void    update1(t_display *dp, sfColor color)
{
	sfVector2f from;
	sfVector2f to;
	int i = 0;

	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfTexture_updateFromPixels(dp->texture, dp->image->pixels, dp->image->width, dp->image->height, 0, 0);
	sfSprite_setTexture(dp->sprite, dp->texture, sfTrue);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	while (sfRenderWindow_isOpen(dp->window)) {
		event_handler1(dp);
		sfRenderWindow_display(dp->window);
		if (i % 100 == 0)
			anim2(dp->image);
		i++;
	}
}

void            event_handler2(t_display *dp)
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
	anim3(dp->image);
	sfTexture_updateFromPixels(dp->texture, dp->image->pixels, dp->image->width, dp->image->height, 0, 0);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfRenderWindow_clear(dp->window, sfBlack);
	sfSprite_setTexture(dp->sprite, dp->texture, sfTrue);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfRenderWindow_display(dp->window);
}

void    update2(t_display *dp, sfColor color)
{
	sfVector2f from;
	sfVector2f to;
	int i = 0;

	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	sfTexture_updateFromPixels(dp->texture, dp->image->pixels, dp->image->width, dp->image->height, 0, 0);
	sfSprite_setTexture(dp->sprite, dp->texture, sfTrue);
	sfRenderWindow_drawSprite(dp->window, dp->sprite, NULL);
	while (sfRenderWindow_isOpen(dp->window)) {
		event_handler2(dp);
		sfRenderWindow_display(dp->window);
		if (i % 100 == 0)
			anim3(dp->image);
		i++;
	}
}
