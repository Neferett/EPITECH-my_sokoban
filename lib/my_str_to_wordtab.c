/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/Neferett/CPool_Day08/task04
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct 12 10:53:16 2016 Bonaldi Jordan
** Last update Tue Nov 22 18:07:46 2016 Bonaldi Jordan
*/

#include "lib.h"

int	char_isalphanum(char c);
char	**my_str_to_wordtab(char *);
char	**tab_complete(char **, char *, int, int *);

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	j;
  int	i;

  j = -1;
  i = 0;
  tab = malloc(my_strlen(str));
  tab = tab_complete(tab, str, i, &j);
  tab[++j] = NULL;
  return (tab);
}

char	**tab_complete(char **tab, char *str, int i, int *j)
{
  char	*arr;

  arr = malloc(my_strlen(str));
  while (*str && !(i = 0) && (!(*j)++ ? 1 : 1))
    {
      if (!char_isalphanum(*str) && (str++)) {}
      while (char_isalphanum(*str))
	if ((arr[i] = *str) && (++i) && (str++)) {}
      if (arr && (tab[*j] = my_strdup(arr)))
	while (*++arr);
    }
  return (tab);
}

int	char_isalphanum(char c)
{
  return ((c >= '0' && c <= '9') ||
	  (c >= 'a' && c <= 'z') ||
	  (c >= 'A' && c <= 'Z'));
}
