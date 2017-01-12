/*
** my_square_root.c for my_square_root in /home/Neferett/test
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Oct  7 11:11:42 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:13:31 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  if (nb < 0)
    return (0);
  while (i < nb)
    {
      if (my_power_rec(i, 2) == nb)
	return (i);
      i += 1;
    }
  return (0);
}
