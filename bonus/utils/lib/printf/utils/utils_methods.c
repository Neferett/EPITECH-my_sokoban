/*
** utils_methods.c for utils_methods in /home/Neferett/PSU_2016_my_printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Nov 16 21:26:29 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:27:31 2016 Bonaldi Jordan
*/

#include "printf.h"

t_params        *set_params(char *s, va_list argp)
{
  int           i;
  t_params      *p;

  if ((i = -1) && (p = my_init_p())) {}
  while (i != -1 ? s[i] && s[++i] : s[++i])
    i = my_setter(s, i, p, argp);
  return (p);
}

int     nb(char *nb, int i)
{
  int   value;
  int   j;

  j = -1;
  value = 0;
  while (++j < i && nb++) {}
  j = -1;
  while (nb[++j] >= '0' && nb[j] <= '9')
    value = (value * 10) + nb[j] - 48;
  return (value);
}

int     mil(int nb)
{
  int	i;

  i = 0;
  if (nb < 0 && (nb *= -1) && i++) {}
  while (nb > 9)
    if ((nb /= 10) && ++i) {}
  return (++i);
}

int     mis(char c)
{
  return (c >= '0' && c <= '9');
}

int	print_p(char c, int a, int *nb)
{
  if (*nb != 0)
    if (c != ' ' && *nb < 0 && (*nb *= -1) && my_putchar('-')) {}
  while (a > 0)
    if ((a--) && my_putchar(c)) {}
  return (1);
}
