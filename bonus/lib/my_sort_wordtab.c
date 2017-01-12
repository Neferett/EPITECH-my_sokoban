/*
** my_sort_wordtab.c for my_sort_wordtab in /home/Neferett/CPool_Day10/task03
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Oct 14 14:18:13 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:13:20 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_sort_wordtab(char **tab)
{
  char	*arr;
  int	i;

  i = 0;
  while (tab[i])
    {
      if (tab[i + 1] != NULL && my_strcmp(tab[i], tab[i + 1]) > 0)
	{
	  arr = tab[i];
	  tab[i] = tab[i + 1];
	  tab[i + 1] = arr;
	  i = -1;
	}
      i += 1;
    }
  return (0);
}
