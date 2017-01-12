/*
** utils_setter.c for setter in /home/Neferett/PSU_2016_my_printf/utils
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sun Nov 20 17:44:55 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:30:56 2016 Bonaldi Jordan
*/

#include "printf.h"

int	my_setter(char *s, int i, t_params *p, va_list argp)
{
  if (s[i] && s[i] == '-' && (p->is_left = 1) && (p->leftnb = nb(s, i + 1))
      && (i += mil(p->leftnb) + 1)) {}
  if (s[i] && ((s[i] == '+' && (p->is_plus = 1))
	       || (s[i] == '#' && (p->ih = 1)))) {}
  if (s[i] && s[i] == ' ' && (p->is_space = 1)) {}
  if (s[i] && s[i] == '0' && (p->is_zero = 1) && (p->z_n = nb(s, ++i)) &&
      (i += mil(p->z_n))) {}
  if (s[i] && mis(s[i]) && (p->is_number = 1) && (p->nb = nb(s, i)) &&
      (i += mil(p->nb) - 1) && (p->before = p->is_left)) {}
  if (s[i] && s[i] == '.' && s[i + 1] == '*' && (p->d_wc = 1) &&
      (p->d_wn = va_arg(argp, int)) && (p->before = p->is_left)) {}
  if (s[i] && s[i] == '.' && mis(s[i + 1]) && (p->i_d_n = 1) &&
      (p->d_n = nb(s, ++i)) &&
      (i += mil(p->d_n) - 1) && (p->before = p->is_left)) {}
  if (s[i] && s[i] == '*' && (p->i_wc = 1) &&
      (p->w_v = va_arg(argp, int)) && (p->before = (p->d_wc || p->i_d_n))) {}
  if (s[i] && ((s[i] == 'h' && (p->is_h = 1))
      || (s[i] == 'l' && (p->is_l = 1)) ||
	       (s[i] == 'L' && (p->is_L = 1)))) {}
  if (s[i] && s[i + 1] && s[i + 1] == 'l'
      && (p->is_l) && !(p->is_l = 0) && (p->is_d_l = 1)) {}
  return (i);
}
