/*
** map_handler.c for map_handler in /home/Neferett/PSU_2016_my_sokoban
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Tue Dec 13 23:27:12 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:53:34 2016 Bonaldi Jordan
*/

# include "project.h"

int   		entire_check(char *str, t_sok *sok)
{
  int		in;
  int		i;

  i = -1;
  in = 0;
  while (str[++i])
    if (str[i] == 'X' && sok->origin[i] == 'O')
      in++;
  return (in);
}

static t_pos		*getpos_X(char *str, int i)
{
  t_pos		*pos;
  int		j;

  j = -1;
  pos = initialiser_pos();
  while (++j < i)
    {
      if (str[j] == '\n' && ++pos->y && !(pos->x = 0)) {}
      pos->x++;
    }
  ++pos->y;
  return (pos);
}

static Boolean		is_hash(char *str, int x, int y)
{
  int		i;

  i = converter_str(str, y, x);
  if (str[i] == '#')
    return (true);
  return (false);
}

static Boolean		check_X(char *str, int i)
{
  t_pos		*pos;

  pos = getpos_X(str, i);
  if ((is_hash(str, pos->x - 1, pos->y) && is_hash(str, pos->x, pos->y + 1)) ||
      (is_hash(str, pos->x + 1, pos->y) && is_hash(str, pos->x, pos->y + 1)) ||
      (is_hash(str, pos->x - 1, pos->y) && is_hash(str, pos->x, pos->y - 1)) ||
      (is_hash(str, pos->x + 1, pos->y) && is_hash(str, pos->x, pos->y - 1)))
    return (true);
  return (false);
}

Boolean		map_checker(char *str, t_sok *sok)
{
  int		out;
  int		i;

  i = -1;
  out = 0;
  while (str[++i])
    if (str[i] == 'X' && sok->origin[i] != 'O' && check_X(str, i))
      out++;
  if (out + sok->in_box == nb_of(str, 'X'))
    return (false);
  return (true);
}
