/*
** my_strstr.c for my_strstr in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 09:26:14 2016 Bonaldi Jordan
** Last update Thu Nov  3 15:50:03 2016 Bonaldi Jordan
*/

#include <stdlib.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  i = 0;
  while (to_find[i])
    {
      if (to_find[i] != str[i] && str[i])
	return (my_strstr(str + 1, to_find));
      i += 1;
    }
  if (!*str)
    return (NULL);
  return (str);
}
