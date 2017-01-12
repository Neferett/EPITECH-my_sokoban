/*
** specific_print.c for specific_print in /home/Neferett/PSU_2016_my_printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sun Nov 20 19:09:26 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:14:55 2016 Bonaldi Jordan
*/

#include "printf.h"

int	my_putchari(char c)
{
  if (c < 32 || c >= 127)
    {
      my_putstr(c <= 6 ? "\\00\0" :
		c >= 8 && c <= 31 ? "\\0\0" :
		"\\\0");
      my_putnbr_base(c, "01234567\0");
    }
  else
    my_putchar(c);
  return (0);
}

int	my_putstri(char *str)
{
  while (*str)
    if (!my_putchari(*str) && str++) {}
  return (0);
}
