/*
** my_showstr.c for my_showstr in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 18:26:23 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:12:54 2016 Bonaldi Jordan
*/

#include "lib.h"

int	my_putnbr_base(int nbr, char *base);
int	my_char_isprintable(char c);

int	my_showstr(char	*str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (!my_char_isprintable(str[i]))
	{
	  my_putchar(92);
	  if (str[i] >= 0 && str[i] <= 'F')
	    my_putchar('0');
	  my_putchar(my_putnbr_base((str[i] + 48), "0123456789ABCDEF"));
	  my_putchar('\n');
	}
      else
	my_putchar(str[i]);
      i += 1;
    }
  return (0);
}

int	my_char_isprintable(char c)
{
  int	value;

  value = 1;
  if (!(c >= 32 && c <= 126))
    value = 0;
  return (value);
}
