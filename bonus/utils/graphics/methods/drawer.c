/*
** drawer.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Fri Dec 16 23:24:31 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:51:47 2016 Bonaldi Jordan
*/

# include "project.h"

void            drawer_player(t_framebuffer *fb, int x, int y, sfColor c)
{
  int           xa;
  int           ya;
  double        radius;
  double        i;
  double        angle;

  radius = 2;
  while (radius < 10)
    {
      i = 0.0;
      while (i < 360.0)
	{
	  angle = i * 3.14 / 180;
	  xa = (int)(x + radius * cos(angle));
	  ya = (int)(y + radius * sin(angle));
	  my_put_pixel(fb, xa, ya, c);
	  i += 0.1;
	}
      radius++;
    }
}

void            draw_trace(t_framebuffer *fb)
{
  int			i;

  i = -1;
  while (++i < 1080)
    my_draw_line(fb, set_vector((W / 2) - 3, i),
		 set_vector((W / 2) + 3, i), sfWhite);
}

void            drawer_cage(t_framebuffer *fb, int x, int y, sfColor c)
{
  int           j;
  int           i;

  i = y - 1;
  while (++i < y + 20)
    {
      j = x - 1;
      while (++j < x + 20)
	my_put_pixel(fb, j, i, c);
    }
}

void            drawer_str(t_framebuffer *fb, char *str,
			   int dec, Boolean multi)
{
  int           x;
  int           y;
  int           i;

  if ((i = -1) && (y = (1080 / 2) - fb->sok->l_y * 10)) {}
  while (str[++i])
    {
      x = (((1920 / 2) - fb->sok->l_x * 20) / (multi ? 2 : 1)) -
	(multi ? 100 : 0) + (multi ? dec * 20 : 0);
      while (str[i] && str[i] != '\n')
	{
	  if (str[i] == '#')
	    drawer_cage(fb, (x += 30), y, sfWhite);
	  if (str[i] == ' ')
	    drawer_cage(fb, (x += 30), y, sfBlack);
	  if (str[i] == 'P')
	    drawer_cage(fb, (x += 30), y, sfYellow);
	  if (str[i] == 'X')
	    drawer_cage(fb, (x += 30), y, sfGreen);
	  if (str[i] == 'O')
	    drawer_cage(fb, (x += 30), y, sfRed);
	  i++;
	}
      y += 30;
    }
}
