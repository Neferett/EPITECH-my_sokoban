/*
** pos_handler.c for pos_handler in /home/Neferett/PSU_2016_my_sokoban
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Tue Dec 13 13:15:41 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:04:16 2016 Bonaldi Jordan
*/

# include "project.h"

int	converter(t_sok *sok, int y, int x)
{
  int	i;

  if ((i = -1) && (!++x ? 1 : 1) && (!--y ? 1 : 1)) {}
  while (sok->str[++i])
    {
      if (y && sok->str[i] == '\n' && --y) {}
      if (!y && --x) {}
      if (!x && !y)
	return (i);
    }
  return (0);
}

int	converter_str(char *str, int y, int x)
{
  int	i;

  if ((i = -1) && (!++x ? 1 : 1) && (!--y ? 1 : 1)) {}
  while (str[++i])
    {
      if (y && str[i] == '\n' && --y) {}
      if (!y && --x) {}
      if (!x && !y)
	return (i);
    }
  return (0);
}

static Boolean		pos_O(t_sok *sok, int new_player, int player)
{
  if (!sok->c_o && sok->str[new_player] == 'O'
      && (sok->c_o = true) && (sok->str[new_player] = 'P')
      && (sok->str[player] = ' ') && (sok->c_pos = new_player))
    return (true);
  else if (sok->c_o && !(sok->c_o = false)
	   && (sok->str[player] = 'O') && (sok->str[new_player] = 'P'))
    return (true);
  return (false);
}

static	Boolean		pos_X(t_sok *sok, int new_player, int player, int d)
{
  int			i;

  i = converter(sok, sok->pos_p->y + (d == 3 ? -2 : d == 4 ? 2 : 0),
		sok->pos_p->x + (d == 1 ? -2 : d == 2 ? 2 : 0));
  if (sok->str[i] != '#' && sok->str[i] != 'X')
    {
      sok->str[player] = ' ';
      sok->str[new_player] = 'P';
      get_pos(sok);
      if (sok->str[i] == 'O' && ++sok->in_box) {}
      sok->str[i] = 'X';
    }
  return (true);
}

Boolean         set_pos(t_framebuffer *fb, int y, int x, int direction)
{
  int           player;
  int           new_player;

  player = converter(fb->sok, fb->sok->pos_p->y, fb->sok->pos_p->x);
  new_player = converter(fb->sok, y, x);
  if (get_char_pos(fb->sok, y, x) == '#')
    return (false);
  if (get_char_pos(fb->sok, y, x) == 'X')
    pos_X(fb->sok, new_player, player, direction);
  else if (!pos_O(fb->sok, new_player, player))
    my_swap(&fb->sok->str[player], &fb->sok->str[new_player]);
  return (true);
}
