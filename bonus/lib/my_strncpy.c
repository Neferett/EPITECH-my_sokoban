/*
** my_strncpy.c for my_strncpy in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 08:52:18 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:15:12 2016 Bonaldi Jordan
*/

#include "lib.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	length;

  i = 0;
  length = my_strlen(src);
  while (i < n)
    {
      dest[i] = src[i];
      i += 1;
    }
  if (n > length)
    dest[i] = '\0';
  return (dest);
}
