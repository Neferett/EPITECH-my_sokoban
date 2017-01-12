/*
** my_str_isnum.c for my_str_isnum in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 11:28:39 2016 Bonaldi Jordan
** Last update Fri Oct 21 23:00:37 2016 Bonaldi Jordan
*/

#include <stdlib.h>

int	my_str_isnum(char *str)
{
  int	i;
  int	value;

  i = 0;
  value = 1;
  if (str[0] == '\0' || str == NULL)
    value = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	value = 0;
      i += 1;
    }
  return (value);
}
