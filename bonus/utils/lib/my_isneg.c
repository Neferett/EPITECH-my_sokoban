/*
** my_isneg.c for my_isneg in /home/Neferett/CPool_Day03
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct  5 09:59:46 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:11:35 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return (0);
}
