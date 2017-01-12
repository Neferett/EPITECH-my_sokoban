/*
** params.c for params in /home/Neferett/PSU_2016_my_printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sat Nov 19 14:24:13 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:28:38 2016 Bonaldi Jordan
*/

#include "printf.h"

int	my_check(char c, char *str, t_params *p)
{
  if ((c == 'x' || c == 'X') &&
      (p->i_d_n || p->d_wc || p->i_wc || p->is_number) && p->is_left &&
      !p->before)
    return (1);
  if ((c == 's' || c == 'S') && (p->before))
    return (1);
  if ((p->is_number && p->i_wc) || (p->d_n && p->i_wc))
    return (1);
  if (c == 'd' && my_c_ctc("ll\0", str) && my_strlen(str) > 2)
    return (1);
  if ((c == 'd' && my_c_ctc("h\0", str) && my_strlen(str) > 1) ||
      (c == 'd' && my_c_ctc("l\0", str) &&
       my_strlen(str) > 1 && !my_c_ctc("ll\\0", str)))
    return (1);
  return (0);
}

int	left_pr(int m, t_params *p)
{
  if (p->is_left && p->leftnb > m && (p->leftnb -= m))
    while (p->leftnb > 0)
      if (!my_putchar(' ') && --p->leftnb) {}
  return (0);
}

int     milu(unsigned int nb)
{
  unsigned int   i;

  i = 0;
  while (nb > 9)
    if ((nb /= 10) && ++i) {}
  return (++i);
}
