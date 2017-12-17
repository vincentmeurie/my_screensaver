/*
** EPITECH PROJECT, 2017
** init igraph
** File description:
** all graph projects
*/

#include "igraph.h"

t_my_framebuffer	*my_framebuffer_create(int width, int height)
{
  t_my_framebuffer	*ptr;

  ptr = malloc(sizeof(t_my_framebuffer));
  if (ptr == NULL)
    return (NULL);
  ptr->pixels = malloc(sizeof(sfUint8) * 4 * (width * height));
  if (ptr->pixels == NULL)
    {
      free(ptr);
      return (NULL);
    }
  ptr->height = height;
  ptr->width = width;
  return (ptr);
}

void	clear_frame(t_my_framebuffer *frame)
{
  int	i;

  i = 0;
  while (i < frame->width * frame->height * 4)
    {
      frame->pixels[i] = 0;
      ++i;
    }
}

int		init_display(t_display *display)
{
  sfVideoMode	mode;

  mode.width = 1920;
  mode.height = 1080;
  mode.bitsPerPixel = 32;
  display->image = my_framebuffer_create(1920, 1080);
  display->texture = sfTexture_create(1920, 1080);
  display->sprite = sfSprite_create();
  display->window = sfRenderWindow_create(mode, "My_Screensaver", sfResize | sfClose, NULL);
  if (display->image == NULL || display->texture == NULL
      || display->sprite == NULL || display->window == NULL)
    return (-1);
  return (0);
}

void	clear_display(t_display *display)
{
  if (display->window)
    sfRenderWindow_destroy(display->window);
  if (display->texture)
    sfTexture_destroy(display->texture);
  if (display->sprite)
    sfSprite_destroy(display->sprite);
}
