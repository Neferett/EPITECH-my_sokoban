/*
** my_printf.c for my_printf in /home/Neferett/printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sat Oct 22 11:54:58 2016 Bonaldi Jordan
** Last update Tue Nov 29 20:37:44 2016 Bonaldi Jordan
*/

#include <stdio.h>
#include <stdarg.h>

#include "printf.h"

int	g_return_value;

int	my_putchar(char c)
{
  g_return_value++;
  write(1, &c, 1);
  return (0);
}

int	my_d(char c, char *str, t_params *p)
{
  int	ok;
  int	i;

  i = -1;
  ok = 0;
  my_putchar('%');
  if (p != NULL)
    while (str[++i])
      {
	if (!ok && str[i] == '*' && str[i + 1] && (ok = 1) &&
	    !my_put_nbr(p->d_wc && p->before ? p->d_wn : p->w_v) && i++) {}
	my_putchar(str[i]);
      }
  else if (!my_putstr(str)) {}
  my_putchar(c);
  return (1);
}

int		my_printf(char *s, ...)
{
  int		i;
  char		*p;
  va_list	argp;

  if (!(g_return_value = 0) && !(p = malloc(my_strlen(s) + 1)))
    return (84);
  va_start(argp, s);
  while (*s)
    {
      if (*s == '%' && *(s + 1) == '%' && (s += 2) && !my_putchar('%')) {}
      if (*s == '%' && (s++) && *s != '%' && (i = -1))
        {
  	  while (get_params(*s))
  	    if ((p[++i] = *s) && (s++)) {}
  	  p[++i] = '\0';
  	  if (((!get_assignement(*s) && !my_match(p, *s)) ||
	       (get_assignement(*s) && !my_match(p, *s))) && my_d(*s, p, 0)) {}
  	  else if ((i = select_methods(*s, argp, p))) {}
	  s++;
	}
      else if (*s && !my_putchar(*s) && s++) {}
    }
  free(p);
  va_end(argp);
  return (g_return_value);
}
