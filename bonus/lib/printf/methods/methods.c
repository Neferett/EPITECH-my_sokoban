/*
** methods.c for methods in /home/Neferett/printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sat Oct 22 14:22:35 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:24:55 2016 Bonaldi Jordan
*/

#include "printf.h"

int	select_methods(char c, va_list argp, char *str)
{
  t_params	*p;
  t_methods	*methods;
  int		i;

  i = -1;
  methods = NULL;
  if (!(methods = init_methods(methods)))
    return (0);
  p = set_params(str, argp);
  if (my_check(c, str, p))
    return (my_d(c, str, p));
  if (c == '%' && percentage())
    return (0);
  while (methods[++i].c)
    if (c == methods[i].c)
      methods[i].methods(argp, p);
  free(p);
  free(methods);
  return (0);
}
