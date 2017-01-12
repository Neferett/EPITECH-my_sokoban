/*
** my_putnbr_base.c for my_putnbr_base in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 13:13:50 2016 Bonaldi Jordan
** Last update Sun Nov 20 18:59:11 2016 Bonaldi Jordan
*/

#include "printf.h"

void	displayul(unsigned long int, char *, unsigned int*, char *);

int	my_pul_b(unsigned long int nbr, char *base, int ok, char *sa)
{
  char	*str;
  unsigned int	i;
  unsigned long int	base_length;

  i = 0;
  base_length = my_strlen(base);
  if (!(str = malloc((msl(nbr) + base_length) * 2)))
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
  displayul(nbr, base, &i, str);
  str[++i] = '\0';
  if (*my_revstr(str) != '0' && ok && !my_putstr(sa)) {}
  my_putstr(str);
  free(str);
  return (i + (ok ? my_strlen(sa) : 0));
}

void	displayul(unsigned long int nbr,
		  char *base, unsigned int *i, char *str)
{
  unsigned  long int	a;
  unsigned  long int	base_length;

  base_length = my_strlen(base);
  if (nbr >= base_length)
    {
      a = nbr % base_length;
      nbr = ((nbr - a) / base_length);
      str[(*i)++] = base[a];
      displayul(nbr, base, i, str);
    }
  else
    str[*i] = base[nbr];
}
