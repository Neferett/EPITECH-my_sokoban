/*
** my_strcapitalize.c for my_strcapitalize in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 11:16:56 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:11:11 2016 Bonaldi Jordan
*/

#include "lib.h"

int	is_separator(char c);
char	my_toupper(char c);

char	*my_strcapitalize(char *str)
{
  int	i;

  i = -1;
  *str = my_toupper(*str);
  while (str[++i])
    if (my_str_isalpha(&str[i]) && is_separator(str[i - 1]))
      str[i] = my_toupper(str[i]);
  return (str);
}

int	is_separator(char c)
{
  return ((c >= 32 && c <= 47)
	  || (c >= 58 && c <= 64)
	  || (c >= 91 && c <= 96)
	  || (c >= 123 && c <= 126));
}
