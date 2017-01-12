/*
** my_strdup.c for my_strdup in /home/Neferett/CPool_Day08/task01
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct 12 08:45:05 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:13:55 2016 Bonaldi Jordan
*/

#include "lib.h"

char	*my_strdup(char *str)
{
  char	*newarray;

  newarray = malloc(sizeof(char) * my_strlen(str) + 1);
  if (newarray != NULL)
    {
      my_strcpy(newarray, str);
      return (newarray);
    }
  else
    return (NULL);
}
