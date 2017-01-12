/*
** my_putnbr_base.c for my_putnbr_base in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 13:13:50 2016 Bonaldi Jordan
** Last update Sun Nov 20 17:36:48 2016 Bonaldi Jordan
*/

#include "lib.h"

int	display(int nbr, char *base);

int	my_putnbr_base(int nbr, char *base)
{
  int	i;
  int	base_length;

  i = 0;
  base_length = my_strlen(base);
  if (base_length == 1)
    {
      while (i < nbr)
	{
	  my_putchar(base[0]);
	  i += 1;
	}
      return (0);
    }
  display(nbr, base);
  return (0);
}

int	display(int nbr, char *base)
{
  int	a;
  int	base_length;

  base_length = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= - 1;
      display(nbr, base);
    }
  else
    if (nbr >= base_length)
      {
	a = nbr % base_length;
	nbr = ((nbr - a) / base_length);
	display(nbr, base);
	my_putchar(base[a]);
      }
    else
      my_putchar(base[nbr]);
  return (0);
}
