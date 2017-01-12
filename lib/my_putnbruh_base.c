/*
** my_putnbr_base.c for my_putnbr_base in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 13:13:50 2016 Bonaldi Jordan
** Last update Sun Nov 20 18:58:19 2016 Bonaldi Jordan
*/

#include "printf.h"

unsigned short int	displayuh(unsigned short int, char *, int*, char *);

int	my_puh_b(unsigned short int nbr, char *base, int ok, char *sa)
{
  char	*str;
  int	i;
  unsigned short int	base_length;

  i = 0;
  base_length = my_strlen(base);
  if (!(str = malloc(msl(nbr) + base_length)))
    return (0);
  if (base_length == 1)
    {
      while (i < nbr)
	{
	  my_putchar(base[0]);
	  i += 1;
	}
      return (0);
    }
  displayuh(nbr, base, &i, str);
  str[++i] = '\0';
  if (ok && *my_revstr(str) != '0' && my_putstr(sa)) {}
  my_putstr(str);
  free(str);
  return (i);
}

unsigned short int	displayuh(unsigned short int nbr,
				  char *base, int *i, char *str)
{
  unsigned  short int	a;
  unsigned  short int	base_length;

  base_length = my_strlen(base);
  if (nbr >= base_length)
    {
      a = nbr % base_length;
      nbr = ((nbr - a) / base_length);
      str[(*i)++] = base[a];
      displayuh(nbr, base, i, str);
    }
  else
    str[*i] = base[nbr];
  return (0);
}
