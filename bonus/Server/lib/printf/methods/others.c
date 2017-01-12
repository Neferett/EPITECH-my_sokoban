/*
** others.c for others in /home/Neferett/PSU_2016_my_printf/methods
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sun Nov 20 17:34:57 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:25:14 2016 Bonaldi Jordan
*/

#include "printf.h"

void	pointer(va_list argp, t_params *p)
{
  int	m;
  int	i;

  if (!(i = va_arg(argp, int)))
    my_putstr("(nil)");
  else
    {
      m = mil(i);
      if (p->is_plus && i >= 0 && my_putchar('+') && ++m) {}
      if (p->is_space && !p->is_plus && i > 0 && my_putchar(' ') && ++m) {}
      if (p->is_zero && print_p('0', m > p->z_n ? 0 : p->z_n - m, &i)) {}
      if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, &i)) {}
      if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, &i)) {}
      if (p->i_d_n && print_p('0', m > p->d_n ? 0 : p->d_n - m, &i)) {}
      if (p->d_wc && print_p('0', m > p->d_wn ? 0 : p->d_wn - m, &i)) {}
      my_putstr("0x");
      my_putnbru_base(i, "0123456789abcdef\0");
    }
}

void	binary_methods(va_list argp, t_params *p)
{
  int	a;
  int	i;
  int	m;

  i = va_arg(argp, int);
  a = i;
  m = mil_convert(&i, "01\0", p->ih, "0\0");
  if (i && --m && my_putstr("0\0")) {}
  if (p->is_plus && i >= 0 && my_putchar('+') && ++m) {}
  if (p->is_space && !p->is_plus && i > 0 && my_putchar(' ') && ++m) {}
  if (p->is_zero && print_p('0', m > p->z_n ? 0 : p->z_n - m, &i)) {}
  if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, &i)) {}
  if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, &i)) {}
  if (p->i_d_n && print_p('0', m > p->d_n ? 0 : p->d_n - m, &i)) {}
  if (p->d_wc && print_p('0', m > p->d_wn ? 0 : p->d_wn - m, &i)) {}
  if (!left_pr(my_pul_b(a, "01\0", p->ih, "\0"), p)) {}
}

int	percentage()
{
  my_putchar('%');
  return (1);
}
