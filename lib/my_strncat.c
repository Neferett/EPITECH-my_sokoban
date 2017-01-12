/*
** my_strcat.c for my_strcat in /home/Neferett/CPool_Day07/lib/my
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Tue Oct 11 09:26:17 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:15:03 2016 Bonaldi Jordan
*/

#include "lib.h"

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	length;

  i = 0;
  length = my_strlen(dest);
  while (i < n && src[i])
    {
      dest[length  + i] = src[i];
      i += 1;
    }
  dest[length + i] = '\0';
  return (dest);
}
