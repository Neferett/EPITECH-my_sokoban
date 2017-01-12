/*
** my_advanced_sort_wordtab.c for my_advanced_sort_wordtab in /home/Neferett/CPool_Day10/task04
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Oct 14 16:30:48 2016 Bonaldi Jordan
** Last update Fri Oct 21 22:43:16 2016 Bonaldi Jordan
*/

#include <stdlib.h>

int	my_advanced_sort_wordtab(char **tab, int(*cmp) (char *, char *))
{
  char	*arr;
  int	i;

  i = 0;
  while (tab[i])
    {
      if (tab[i + 1] != NULL && cmp(tab[i], tab[i + 1]) > 0)
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
