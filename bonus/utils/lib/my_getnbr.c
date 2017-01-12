/*
** my_getnbr.c for my_getnbr in /home/Neferett/CPool_Day04
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Thu Oct  6 11:42:14 2016 Bonaldi Jordan
** Last update Wed Dec  7 17:27:53 2016 Bonaldi Jordan
*/

#include "lib.h"

int     my_getnbr(char *str)
{
  int   nb;
  int   neg;

  if (!(nb = 0) && (neg = 1)) {}
  while (((*str == '-' && (neg = -1)) || *str == '+') && ++str);
  while (*str >= '0' && *str <= '9' &&
	 (!(nb = (nb * 10) + *str - 48) ? 1 : 1) && ++str);
  return (nb * neg);
}
