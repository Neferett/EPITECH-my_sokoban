/*
** my_putnbr_base.c for my_putnbr_base in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 13:13:50 2016 Bonaldi Jordan
** Last update Sun Nov 20 18:58:03 2016 Bonaldi Jordan
*/

#include "printf.h"

void	displayu(unsigned int nbr, char *base, unsigned int*);

int	my_putnbru_base(unsigned int nbr, char *base)
{
  unsigned int	i;
  unsigned int	base_length;

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
  displayu(nbr, base, &i);
  return (++i);
}

void	displayu(unsigned int nbr, char *base, unsigned int *i)
{
  unsigned  int	a;
  unsigned  int	base_length;

  base_length = my_strlen(base);
  if (nbr >= base_length)
    {
      *i += 1;
      a = nbr % base_length;
      nbr = ((nbr - a) / base_length);
      displayu(nbr, base, i);
      my_putchar(base[a]);
    }
  else
    my_putchar(base[nbr]);
}
