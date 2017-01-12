/*
** utils.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus/graphics
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Dec 16 23:21:26 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:57:20 2016 Bonaldi Jordan
*/

# include "project.h"

t_framebuffer           *my_framebuffer_create(t_sok *sok)
{
  int                   i;
  t_framebuffer         *fb;

  if (!(fb = malloc(sizeof(*fb))))
    exit(EXIT_FAILURE);
  if (!(fb->sprite = sfSprite_create()) ||
      !(fb->texture = sfTexture_create(W, H)) ||
      !(fb->t1 = sfText_create()) || !(fb->t2 = sfText_create()) ||
      !(fb->t3 = sfText_create()) || !(fb->t4 = sfText_create()) ||
      !(fb->font = sfFont_createFromFile("Sweet.ttf")))
    exit(84);
  sfSprite_setTexture(fb->sprite, fb->texture, sfTrue);
  fb->mode = set_mode(W, H, 32);
  if (!(fb->wd = sfRenderWindow_create(fb->mode, "Sokoban",
				       sfResize | sfClose, NULL)))
    exit(84);
  fb->sok = sok;
  if ((fb->height = H) && (fb->width = W) && !(fb->sel = 0)) {}
  if (!(fb->pixels = malloc(W * H * 4 * sizeof(*fb))))
    exit(EXIT_FAILURE);
  i = -1;
  while (++i < W * H * 4)
    fb->pixels[i] = 0;
  return (fb);
}

sfVector2i      set_vector(int x, int y)
{
  sfVector2i    vector;

  vector.x = x;
  vector.y = y;
  return (vector);
}

sfVector2f      set_vectorf(int x, int y)
{
  sfVector2f    vector;

  vector.x = x;
  vector.y = y;
  return (vector);
}

sfVideoMode     set_mode(int w, int h, int bpp)
{
  sfVideoMode   mode;

  mode.width = w;
  mode.height = h;
  mode.bitsPerPixel = bpp;
  return (mode);
}

void		disp_screen(t_framebuffer *fb)
{
  sfTexture_updateFromPixels(fb->texture, fb->pixels, W, H, 0, 0);
  sfRenderWindow_clear(fb->wd, sfBlack);
  sfRenderWindow_drawSprite(fb->wd, fb->sprite, NULL);
  if (fb->multiplayer)
    {
      sfRenderWindow_drawText(fb->wd, fb->t1, NULL);
      sfRenderWindow_drawText(fb->wd, fb->t2, NULL);
    }
  if (fb->wl || (!fb->single && !fb->multiplayer))
    {
      sfRenderWindow_drawText(fb->wd, fb->t1, NULL);
      sfRenderWindow_drawText(fb->wd, fb->t2, NULL);
      sfRenderWindow_drawText(fb->wd, fb->t3, NULL);
      sfRenderWindow_drawText(fb->wd, fb->t4, NULL);
    }
  sfRenderWindow_display(fb->wd);
}
