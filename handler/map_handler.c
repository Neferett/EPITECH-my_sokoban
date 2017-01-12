/*
** map_handler.c for map_handler in /home/Neferett/PSU_2016_my_sokoban
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Tue Dec 13 23:27:12 2016 Bonaldi Jordan
** Last update Tue Dec 20 21:54:44 2016 Bonaldi Jordan
*/

# include "project.h"

static t_pos		*getpos_X(t_sok *sok, int i)
{
  t_pos		*pos;
  int		j;

  j = -1;
  pos = initialiser_pos();
  while (++j < i)
    {
      if (sok->str[j] == '\n' && ++pos->y && !(pos->x = 0)) {}
      pos->x++;
    }
  ++pos->y;
  return (pos);
}

static Boolean		is_hash(t_sok *sok, int x, int y)
{
  int		i;

  i = converter(sok, y, x);
  if (sok->str[i] == '#')
    return (true);
  return (false);
}

static Boolean		check_X(t_sok *sok, int i)
{
  t_pos		*pos;

  pos = getpos_X(sok, i);
  if ((is_hash(sok, pos->x - 1, pos->y) && is_hash(sok, pos->x, pos->y + 1)) ||
      (is_hash(sok, pos->x + 1, pos->y) && is_hash(sok, pos->x, pos->y + 1)) ||
      (is_hash(sok, pos->x - 1, pos->y) && is_hash(sok, pos->x, pos->y - 1)) ||
      (is_hash(sok, pos->x + 1, pos->y) && is_hash(sok, pos->x, pos->y - 1)))
    return (true);
  return (false);
}

Boolean		map_checker(t_sok *sok)
{
  int		out;
  int		i;

  i = -1;
  out = 0;
  while (sok->str[++i])
    if (sok->str[i] == 'X' && sok->origin[i] != 'O' && check_X(sok, i))
      out++;
  if (out + sok->in_box == nb_of(sok->str, 'X'))
    return (false);
  return (true);
}
