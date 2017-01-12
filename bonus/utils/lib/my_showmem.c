/*
** my_showmem.c for my_showmem in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 21:18:59 2016 Bonaldi Jordan
** Last update Fri Oct 21 22:58:54 2016 Bonaldi Jordan
*/

#include "my.h"

int	isprintable_char(char c);
int	my_putnbr_base(int nbr, char *base);
int	my_getnbr(char *str);
void	display_chars(char *str, int size);
void	display_adresses(char *str, int size);
void	display_content(char *str, int size);

int	my_showmem(char *str, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      display_adresses(str, size);
      display_content(str, size);
      display_chars(str, size);
      str = str + size;
      i += 1;
    }
  return (0);
}

void	display_chars(char *str, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      if (isprintable_char(str[i]))
	my_putchar(str[i]);
      else
	my_putchar('.');
      i = i + 1;
    }
  my_putchar('\n');

}

void	display_adresses(char *str, int size)
{
  my_putnbr_base(my_getnbr(str), "0123456789ABCDEF");
  my_putchar(':');
  my_putchar(' ');
}

void	display_content(char *str, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      if (str[i] < size)
	my_putchar('0');
      my_putnbr_base((str[i] + 48), "0123456789ABCDEF");
      if (i % 2 == 1)
	my_putchar(' ');
      i += 1;
    }
}

int	isprintable_char(char c)
{
  int	value;

  value = 1;
  if (!(c >= 32 && c <= 126))
    value = 0;
  return (value);
}
