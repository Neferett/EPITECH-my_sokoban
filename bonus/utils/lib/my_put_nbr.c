/*
** my_put_nbr.c for my_put_nbr in /home/Neferett/CPool_Day03
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct  5 16:13:21 2016 Bonaldi Jordan
** Last update Sat Nov 19 20:32:24 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_put_nbr(long int nb)
{
  long a;

  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr(nb *= -1);
    }
  else
    {
      if (nb >= 10)
	{
	  a = nb % 10;
	  nb = ((nb - a) / 10);
	  my_put_nbr(nb);
	  my_putchar(a + 48);
	}
      else
	my_putchar(nb + 48);
    }
  return (0);
}
