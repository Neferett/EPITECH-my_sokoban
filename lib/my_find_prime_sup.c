/*
** my_find_prime_sup.c for my_find_prime_sup in /home/Neferett/CPool_Day05
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Oct  7 15:01:16 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:11:22 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_find_prime_sup(int nb)
{
  int	i;

  i = nb + 1;
  if (nb == 0 || nb == 1 || my_is_prime(nb))
    return (nb == 0 ? 2 : nb == 1 ? 1 : nb);
  else
    {
      while (!my_is_prime(i))
	i += 1;
      if (my_is_prime(i))
	return (i);
    }
  return (0);
}
