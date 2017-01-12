/*
** my_str_islower.c for my_str_islower in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 11:28:39 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:14:51 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_str_isupper(char *str)
{
  int	i;
  int	value;

  i = 0;
  value = 1;
  while (str[i])
    {
      if (my_str_isalpha(&str[i]) && !(str[i] >= 'A' && str[i] <= 'Z'))
	value = 0;
      i += 1;
    }
  return (value);
}
