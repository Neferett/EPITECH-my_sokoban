/*
** my_show_wordtab.c for my_showwordtab.c in /home/Neferett/CPool_Day08
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct 12 10:23:49 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:13:08 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_show_wordtab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i])
    {
      my_putstr(tab[i]);
      if (tab[i + 1])
	my_putchar('\n');
    }
  return (0);
}
