/*
** int_methods.c for int_methods in /home/Neferett/printf/methods/integer
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 24 07:52:59 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:43:44 2016 Bonaldi Jordan
*/

#include "printf.h"

void	int_decimal(va_list argp, t_params *p)
{
  int	m;
  int	i;

  if ((p->is_l && !my_putl_nbr(va_arg(argp, long int))) ||
      (p->is_h && !my_puth_nbr(va_arg(argp, int))))
    return;
  i = va_arg(argp, int);
  m = mil(i);
  if (i < 0 && !(p->is_plus = 0)) {}
  if (p->is_space && !p->is_plus && i > 0 && !my_putchar(' ') && ++m) {}
  if (p->is_zero && print_p('0', m > p->z_n ? 0 : p->z_n - m, &i)) {}
  if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, &i)) {}
  if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, &i)) {}
  if (p->i_d_n && print_p('0', m > p->d_n ? 0 : p->d_n - m, &i)) {}
  if (p->d_wc && print_p('0', m > p->d_wn ? 0 : p->d_wn - m, &i)) {}
  if (p->is_plus && i >= 0 && !my_putchar('+') && ++m) {}
  if (!my_put_nbr(i) && !left_pr(m, p)) {}
}

void     int_octal(va_list argp, t_params *p)
{
  int	m;
  unsigned int	i;

  if ((p->is_l && !my_pul_b(va_arg(argp, US long int), B_OC, p->ih, "0\0")) ||
      (p->is_h && !my_puh_b(va_arg(argp, US int), B_OC, p->ih, "0\0")))
    return;
  i = va_arg(argp, unsigned int);
  m = mil(i);
  if (p->is_space && !p->is_plus && i > 0 && !my_putchar(' ') && ++m) {}
  if (p->is_zero && print_p('0', m > p->z_n ? 0 : p->z_n - m, (int *)&i)) {}
  if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, (int*)&i)) {}
  if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, (int *)&i)) {}
  if (p->i_d_n && print_p('0', m > p->d_n ? 0 : p->d_n - m, (int *)&i)) {}
  if (p->d_wc && print_p('0', m > p->d_wn ? 0 : p->d_wn - m, (int *)&i)) {}
  if (!left_pr(my_pul_b(i, B_OC, p->ih, "0\0"), p)) {}
}

void		int_hex(va_list argp, t_params *p)
{
  int	m;
  unsigned int	i;

  if ((p->is_l && my_pul_b(va_arg(argp, US long int), B_hex, p->ih, "0x\0"))
      || (p->is_h && my_puh_b(va_arg(argp, US int), B_hex, p->ih, "0x\0")))
    return;
  i = va_arg(argp, unsigned int);
  m = mil(i);
  if (p->is_space && !p->is_plus && i > 0 && ++m && my_putchar(' ')) {}
  if (p->is_zero && print_p('0', m > p->z_n ? 0 : p->z_n - m, (int *)&i)) {}
  if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, (int *)&i)) {}
  if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, (int *)&i)) {}
  if (p->i_d_n && print_p('0', m > p->d_n ? 0 : p->d_n - m, (int *)&i)) {}
  if (p->d_wc && print_p('0', m > p->d_wn ? 0 : p->d_wn - m, (int *)&i)) {}
  if (!left_pr(my_pul_b(i, B_hex, p->ih, "0x\0"), p)) {}
}

void		int_hex_maj(va_list argp, t_params *p)
{
  int	m;
  unsigned int	i;

  if ((p->is_l && !my_pul_b(va_arg(argp,
				   US long int), B_HEX, p->ih, "0X\0")) ||
      (p->is_h && !my_puh_b(va_arg(argp, US int), B_HEX, p->ih, "0X\0")))
    return;
  i = va_arg(argp, unsigned int);
  m = mil(i);
  if (p->is_space && !p->is_plus && i > 0 && ++m && my_putchar(' ')) {}
  if (p->is_zero && print_p('0', m > p->z_n ? 0 : p->z_n - m, (int *)&i)) {}
  if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, (int *)&i)) {}
  if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, (int *)&i)) {}
  if (p->i_d_n && print_p('0', m > p->d_n ? 0 : p->d_n - m, (int *)&i)) {}
  if (p->d_wc && print_p('0', m > p->d_wn ? 0 : p->d_wn - m, (int *)&i)) {}
  if (!left_pr(my_pul_b(i, B_HEX, p->ih, "0X\0"), p)) {}
}

void		int_unsigned(va_list argp, t_params *p)
{
  int	m;
  unsigned int	i;

  if ((p->is_l && !my_putul_nbr(va_arg(argp, US long int))) ||
      (p->is_h && !my_putuh_nbr(va_arg(argp, US int))))
    return;
  i = va_arg(argp, unsigned int);
  m = mil(i);
  if (p->is_plus && !my_putchar('+')) {}
  if (p->is_space && !p->is_plus && i > 0 && ++m && my_putchar(' ')) {}
  if (p->is_zero && print_p('0', m > p->z_n ? 0 : p->z_n - m, (int *)&i)) {}
  if (p->is_number && print_p(' ', m > p->nb ? 0 : p->nb - m, (int *)&i)) {}
  if (p->i_wc && print_p(' ', m > p->w_v ? 0 : p->w_v - m, (int *)&i)) {}
  if (p->i_d_n && print_p('0', m > p->d_n ? 0 : p->d_n - m, (int *)&i)) {}
  if (p->d_wc && print_p('0', m > p->d_wn ? 0 : p->d_wn - m, (int *)&i)) {}
  if (!my_putu_nbr(i) && !left_pr(m, p)) {}
}
