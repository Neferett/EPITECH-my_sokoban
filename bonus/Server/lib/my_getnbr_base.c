/*
** my_getnbr_base.c for my_getnbr_base in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 13:13:50 2016 Bonaldi Jordan
** Last update Mon Nov 14 14:07:13 2016 Bonaldi Jordan
*/

#include "lib.h"

char	*isneg(char *str, int *operator);
int	get_nbr(char *str, char *base);

int	my_getnbr_base(char *str, char *base)
{
  int	length;
  int	i;

  i = 0;
  length = my_strlen(base);
  if (length == 1)
    {
      while (str[i])
	i += 1;
      return (i);
    }
  else
    return get_nbr(str, base);
}

int	get_nbr(char *str, char *base)
{
  int	i;
  int	*operator;
  int	length;
  int	nb;
  int	a;
  int	op;

  i = 0;
  nb = 0;
  operator = &op;
  str = isneg(str, operator);
  length = my_strlen(base);
  while (str[i])
    {
      a = 0;
      while (a < length && str[i] != base[a])
	a += 1;
      nb = nb * length + a;
      i += 1;
    }
  return (nb * (*operator == 1 ? -1 : 1));
}

char	*isneg(char *str, int *operator)
{
  int	i;
  int	j;

  *operator = 0;
  while (!my_str_isnum(str) && str[j] != '\0')
    {
      i = 0;
      while (str[i])
	{
	  if (str[i] == '-')
	    *operator = 1;
	  i += 1;
	}
      j += 1;
      str = str + 1;
    }
  return (str);
}
