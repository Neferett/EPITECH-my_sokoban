/*
** chars_methods.c for chars_methods in /home/Neferett/printf/methods/chars
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 24 07:54:33 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:15:36 2016 Bonaldi Jordan
*/

#include "printf.h"

void	chars_char(va_list argp, t_params *p)
{
  my_putchar(va_arg(argp, int));
  if (!left_pr(1, p)) {}
}

void	chars_string(va_list argp, t_params *p)
{
  int	n;
  char	*str;
  int	m;

  str = va_arg(argp, char *);
  m = my_strlen(str);
  n = 0;
  if (p->is_zero && print_p(' ', m > p->z_n ? 0 : p->z_n - m, &n)) {}
  if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, &n)) {}
  if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, &n)) {}
  if (p->i_d_n && p->d_n < m)
    {
      while (p->d_n >= 0)
	if (--p->d_n && !my_putchar(*str) && str++) {}
      left_pr(m, p);
      return;
    }
  if (p->d_wc && p->d_wn < m)
    {
      while (p->d_wn >= 0)
	if (--p->d_wn && !my_putchar(*str) && str++) {}
      left_pr(m, p);
      return;
    }
  if (!my_putstr(str) && !left_pr(m, p)) {}
}

void	chars_print(va_list argp, t_params *p)
{
  int	n;
  char	*str;
  int	m;

  str = va_arg(argp, char *);
  m = my_strlen(str);
  n = 0;
  if (p->is_zero && print_p(' ', m > p->z_n ? 0 : p->z_n - m, &n)) {}
  if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, &n)) {}
  if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, &n)) {}
  if (p->i_d_n && p->d_n < m)
    {
      while (p->d_n >= 0)
	if (--p->d_n && !my_putchari(*str) && str++) {}
      left_pr(m, p);
      return;
    }
  if (p->d_wc && p->d_wn < m)
    {
      while (p->d_wn >= 0)
	if (--p->d_wn && !my_putchari(*str) && str++) {}
      left_pr(m, p);
      return;
    }
  if (!my_putstri(str) && !left_pr(m, p)) {}
}
