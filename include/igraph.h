#ifndef _IGRAPH_H_
#define _IGRAPH_H_

#include <stdlib.h>
#include <math.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>

typedef struct	s_my_framebuffer
{
  sfUint8*	pixels;
  int		width;
  int		height;
}		t_my_framebuffer;

typedef struct		s_display
{
  sfRenderWindow	*window;
  sfTexture		*texture;
  sfSprite		*sprite;
  t_my_framebuffer	*image;
}			t_display;

void			my_put_pixel(t_my_framebuffer *framebuffer, int x, int y, sfColor color);
t_my_framebuffer	*my_framebuffer_create(int width, int height);
void			clear_frame(t_my_framebuffer *frame);
void			update(t_display *, sfColor color);
void			event_handler(t_display *);
int			init_display(t_display *);
void			clear_display(t_display *);
void			anim1(t_my_framebuffer *);
void			anim2(t_my_framebuffer *);
sfVector3f		randr(t_my_framebuffer *);
void			anim3(t_my_framebuffer *);
sfColor			my_randc();
void			my_draw_circle(t_my_framebuffer *, sfVector3f, sfColor);
void			my_putchar(char c);
void			mu_putstr(char *);
void			dp_help();
void			update1(t_display *, sfColor);
void			update2(t_display *, sfColor);
void			event_handler1(t_display *);
void			event_handler2(t_display *);
int			my_getnbr(char *);
int			my_strcmp(char *, char *);

#endif /* _IGRAPH_H_ */
