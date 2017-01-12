/*
** my_draw_line.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Dec 16 23:46:59 2016 Bonaldi Jordan
** Last update Fri Dec 16 23:47:36 2016 Bonaldi Jordan
*/

# include "project.h"

# define ABS(x)  ((x < 0) ? - (x) : x)

typedef struct          s_drawer
{
  int           dx;
  int           dy;
  int           xinc;
  int           yinc;
  int           c;
}                       t_drawer;

t_drawer        *init_list()
{
  t_drawer      *d;

  if ((!(d = malloc(sizeof(t_drawer)))))
    exit(84);
  d->dx = 0;
  d->dy = 0;
  d->xinc = 0;
  d->yinc = 0;
  d->c = 0;
  return (d);
}

void            my_draw_line(t_framebuffer *fb, sfVector2i f,
			     sfVector2i t, sfColor color)
{
  t_drawer      *d;
  int i;

  d = init_list();
  d->xinc = ((t.x - f.x) > 0) ? 1 : -1;
  d->yinc = ((t.y - f.y) > 0) ? 1 : -1;
  if ((!(d->dx = abs(t.x - f.x)) ? 1 : 1)
      && (!(d->dy = abs(t.y - f.y)) ? 1 : 1)) {}
  my_put_pixel(fb, f.x, f.y, color);
  if (d->dx > d->dy && (!(d->c = d->dx / 2) ? 1 : 1) && (i = -1))
    while (++i <= d->dx)
      {
	if ((!(f.x += d->xinc) ? 1 : 1) && (!(d->c += d->dy) ? 1 : 1)) {}
	if (d->c >= d->dx && (!(d->c -= d->dx) ? 1 : 1)
	    && (!(f.y += d->yinc))) {}
	my_put_pixel(fb, f.x, f.y, color);
      }
  else if ((!(d->c = d->dy / 2) ? 1 : 1) && (i = -1))
    while (++i <= d->dy)
      {
	if ((!(f.y += d->yinc) ? 1 : 1) && (!(d->c += d->dx) ? 1 : 1)) {}
	if (d->c >= d->dy && (!(d->c -= d->dy) ? 1 : 1)
	    && (!(f.x += d->xinc) ? 1 : 1)) {}
	my_put_pixel(fb, f.x, f.y, color);
      }
}
