/*
** player_handler.c for player_handler in /home/Neferett/PSU_2016_my_sokoban
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Tue Dec 13 12:37:04 2016 Bonaldi Jordan
** Last update Tue Dec 13 21:32:03 2016 Bonaldi Jordan
*/

# include "project.h"

void		get_pos(t_sok *sok)
{
  int		i;

  i = -1;
  sok->pos_p->y = 0;
  sok->pos_p->x = 0;
  while (sok->str[++i] != 'P')
    {
      if (sok->str[i] == '\n' && ++sok->pos_p->y && !(sok->pos_p->x = 0)) {}
      ++sok->pos_p->x;
    }
  ++sok->pos_p->y;
}

char		get_char_pos(t_sok *sok, int y, int x)
{
  int		i;

  if ((i = -1) && (!++x ? 1 : 1) && (!--y ? 1 : 1)) {}
  while (sok->str[++i])
    {
      if (y && sok->str[i] == '\n' && --y) {}
      if (!y && --x) {}
      if (!x && !y)
	return (sok->str[i]);
    }
  return (0);
}
