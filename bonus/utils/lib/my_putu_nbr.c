/*
** my_put_nbr.c for my_put_nbr in /home/Neferett/CPool_Day03
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct  5 16:13:21 2016 Bonaldi Jordan
** Last update Sun Nov 20 17:55:33 2016 Bonaldi Jordan
*/

#include "printf.h"

int	my_putu_nbr(unsigned int nb)
{
  unsigned int	a;

  if (nb >= 10)
    {
      a = nb % 10;
      nb = ((nb - a) / 10);
      my_putu_nbr(nb);
      my_putchar(a + 48);
    }
  else
    my_putchar(nb + 48);
  return (0);
}
