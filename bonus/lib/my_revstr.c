/*
** my_revstr.c for my_revstr in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 08:57:33 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:12:42 2016 Bonaldi Jordan
*/

#include "lib.h"

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  char	c;

  i = 0;
  j = my_strlen(str) - 1;
  while (i < my_strlen(str) / 2)
    {
      c = str[i];
      str[i] = str[j];
      str[j] = c;
      i += 1;
      j -= 1;
    }
  return (str);
}
