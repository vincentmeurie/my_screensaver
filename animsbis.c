/*
** EPITECH PROJECT, 2017
** animsbis
** File description:
** second file for animations
*/

#include "test.h"

sfVector3f randr(t_my_framebuffer *frame)
{
	sfVector3f round;

	round.x = rand() % (frame->width);
	round.y = rand() % 10;
	round.z = rand() % (frame->width / frame->height);
	return (round);
}

void anim3(t_my_framebuffer *frame)
{
	sfVector3f round;
	sfColor color;

	round = randr(frame);
	color = my_randc();
	my_draw_circle(frame, round, color);
}
