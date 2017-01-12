/*
** my_putnbr_base.c for my_putnbr_base in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 13:13:50 2016 Bonaldi Jordan
** Last update Sun Nov 20 18:12:58 2016 Bonaldi Jordan
*/

#include "printf.h"

void	d_milu(unsigned int*, char *, int*, char *);

int	mil_convertu(unsigned int *nbr, char *base, int ok, char *sa)
{
  char	*str;
  int	i;
  int	base_length;

  i = 0;
  base_length = my_strlen(base);
  if (!(str = malloc(mil(*nbr) + base_length)))
    return (0);
  d_milu(nbr, base, &i, str);
  str[++i] = '\0';
  *nbr = (*my_revstr(str) != '0');
  free(str);
  return (ok ? ++i + my_strlen(sa) : ++i);
}

void	d_milu(unsigned int *nbr, char *base, int *i, char *str)
{
  unsigned int	a;
  unsigned int	base_length;

  base_length = my_strlen(base);
  if (*nbr >= base_length)
    {
      a = *nbr % base_length;
      *nbr = ((*nbr - a) / base_length);
      str[(*i)++] = base[a];
      d_milu(nbr, base, i, str);
    }
  else
    str[*i] = base[*nbr];
}
