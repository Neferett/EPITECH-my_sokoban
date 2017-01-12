/*
** my_put_nbr.c for my_put_nbr in /home/Neferett/CPool_Day03
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct  5 16:13:21 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:01:16 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_putuh_nbr(unsigned short int nb)
{
  unsigned short int a;

  if (nb >= 10)
    {
      a = nb % 10;
      nb = ((nb - a) / 10);
      my_putuh_nbr(nb);
      my_putchar(a + 48);
    }
  else
    my_putchar(nb + 48);
  return (0);
}
