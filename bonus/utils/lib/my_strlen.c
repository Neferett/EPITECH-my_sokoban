/*
** my_strlen.c for my_strlen in /home/Neferett/CPool_Day04
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Thu Oct  6 09:06:34 2016 Bonaldi Jordan
** Last update Tue Dec 13 19:47:55 2016 Bonaldi Jordan
*/
#include <stdio.h>

int	my_strlen(char *str)
{
  return (*str ? my_strlen(++str) + 1 : 0);
}

int	my_strlen_b(char *str)
{
  int	tmp;
  int	i;

  if (!(i = 0) && !(tmp = 0)) {}
  while (*str && (!++i ? 1 : 1))
    {
      if (*str == '\n' && i > tmp && (tmp = i) && !(i = 0)) {}
      else if (*str == '\n' && !(i = 0)) {}
      str++;
    }
  return (--tmp);
}

int	my_strlen_n(char *str)
{
  int	i;

  i = 0;
  while (*str)
    if (*str == '\n' && ++str && ++i) {}
    else if (++str) {}
  return (i);
}
