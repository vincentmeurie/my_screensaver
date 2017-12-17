/*
** EPITECH PROJECT, 2017
** anims
** File description:
** animations for my screen saver
*/

#include "test.h"

sfVector2f my_randx(t_my_framebuffer *frame)
{
	sfVector2f ran;

//	srand(sfClock_getElapsedTime());
	ran.x = rand() % frame->width;
	ran.y = rand() % frame->height;
	return (ran);
}

sfColor my_randc()
{
	sfColor ran;

//	srand(sfClock_getElapsedTime());
        ran.r = rand() % 255;
        ran.g = rand() % 255;
        ran.b = rand() % 255;
        ran.a = rand() % 255;
	return (ran);
}

void anim1(t_my_framebuffer *frame)
{
	sfVector2f from;
	sfVector2f to;
	sfColor color;
	int i = 0;
/*	int acc = 0;
	long i = 0;

	while (acc <= 100000) {
		i = 0;
		from.x = frame->width / 2;
		from.y = frame->height / 2;
		to = my_randx(frame);
		color = my_randc();
		printf("%i %i\n%i %i %i %i\n", to.x, to.y, color.r, color.g, color.b, color.a);
		while (i < 1000)
			i++;
		my_draw_line(frame, from, to, color);
		acc++;
		}*/
	from = my_randx(frame);
	to = my_randx(frame);
	color = my_randc();
	my_draw_line(frame, from, to, color);
	while (i < 50000000)
		i++;
}

void anim2(t_my_framebuffer *frame)
{
	sfVector2f point;
	sfColor color;

	point = my_randx(frame);
	color = my_randc();
	my_put_pixel(frame, point.x, point.y, color);
}
