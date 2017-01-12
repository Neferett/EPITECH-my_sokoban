/*
** initialiser.c for initialiser in /home/Neferett/PSU_2016_my_sokoban
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Tue Dec 13 12:27:42 2016 Bonaldi Jordan
** Last update Mon Dec 19 23:40:50 2016 root
*/

# include "project.h"

t_pos		*init_pos(int x, int y)
{
  t_pos		*pos;

  if ((pos = malloc(sizeof(*pos))) && (!(pos->x = x) ? 1 : 1)
      && (!(pos->y = y) ? 1 : 1)) {}
  else
    exit(84);
  return (pos);
}

t_pos		*initialiser_pos()
{
  t_pos		*pos;

  if ((pos = malloc(sizeof(*pos))) && !(pos->x = 0) && !(pos->y = 0)) {}
  else
    exit(84);
  return (pos);
}

t_sok		*initialiser(char *str)
{
  int		i;
  t_sok		*sok;

  if (!(sok = malloc(sizeof(*sok))) || (sok->fd = open(str, O_RDONLY)) < 0 ||
      !(sok->str = malloc(4097)))
    exit(84);
  if ((i = read(sok->fd, sok->str, 4096))) {}
  sok->file = my_strdup(str);
  sok->str[i] = 0;
  sok->str2 = my_strdup(str);
  sok->origin = my_strdup(sok->str);
  sok->c_o = false;
  sok->x_o = false;
  sok->x_pos = 0;
  sok->c_pos = 0;
  sok->in_box = 0;
  sok->pos_p = initialiser_pos();
  sok->l_x = my_strlen_b(sok->str);
  sok->l_y = my_strlen_n(sok->str);
  return (sok);
}
