/*
** EPITECH PROJECT, 2017
** my_draw_lines
** File description:
** draw lines from any point to any other
*/

#include "test.h"

void	my_draw_line(t_my_framebuffer *framebuffer, sfVector2f from, sfVector2f to, sfColor color)
{
	float e = to.x - from.x;
	float dx = 2 * e;
	float dy = (to.y - from.y) * 2;

	while (from.x <= to.x) {
		my_put_pixel(framebuffer, from.x, from.y, color);
		from.x += 1;
		if ((e -= dy) <= 0) {
			from.y += 1;
			e += dx;
		}
	}
}

void	my_draw_circle(t_my_framebuffer *framebuffer, sfVector3f round, sfColor color)
{
	sfVector3f to;

	to.x = 0;
	to.y = round.x;
	to.z = 5 - 4 * round.x;

	while (to.x <= to.y) {
		my_put_pixel(framebuffer, to.x + round.y, to.y + round.z, color);
		my_put_pixel(framebuffer, to.y + round.y, to.x + round.z, color);
		my_put_pixel(framebuffer, -to.x + round.y, to.y + round.z, color);
		my_put_pixel(framebuffer, -to.y + round.y, to.x + round.z, color);
		my_put_pixel(framebuffer, to.x + round.y, -to.y + round.z, color);
		my_put_pixel(framebuffer, to.y + round.y, -to.x + round.z, color);
		my_put_pixel(framebuffer, -to.x + round.y, -to.y + round.z, color);
		my_put_pixel(framebuffer, -to.y + round.y, -to.x + round.z, color);
		if (to.z > 0) {
			to.y = to.y - 1;
			to.z = to.z - 8 * to.y;
		}
		to.x += 1;
		to.z = to.z + 8 * to.x + 4;
	}
}
