/*
** utils.c for utils in /home/Neferett/printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sat Oct 22 12:31:15 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:26:04 2016 Bonaldi Jordan
*/

#include "printf.h"

t_cp	tab_cp[] =
  {
    {'%', "-0123456789\0"},
    {'c', "-0123456789\0"},
    {'d', "-+ #0123456789*.hl\0"},
    {'i', "-+ #0123456789*.hl\0"},
    {'o', "-+ #0123456789*.hl\0"},
    {'x', "-+ #0123456789*.hl\0"},
    {'X', "-+ #0123456789*.hl\0"},
    {'u', "-+ 0123456789*.hl\0"},
    {'b', "-+ #0123456789*.\0"},
    {'p', "-+ 0123456789*.\0"},
    {'s', "- 0123456789*.\0"},
    {'S', "- 0123456789*.\0"},
  };

int	get_assignement(char c)
{
    return (c == 'd' || c == 'i' ||
	    c == 'o' || c == 'x' ||
	    c == 'X' || c == 'u' ||
	    c == 'c' || c == 's' ||
	    c == 'f' || c == 'e' ||
	    c == 'E' || c == 'g' ||
	    c == 'G' || c == 'p' ||
	    c == 'n' || c == '%' ||
	    c == 'b' || c == 'S');
}

int	get_params(char c)
{
  return (c == '-' || c == '+' ||
	  c == ' ' || c == '#' ||
	  c == '0' || (c >= '0' && c <= '9') ||
	  c == '*' || c == '.' ||
	  c == 'h' || c == 'l' ||
	  c == 'L');
}

int	my_match(char *str, char c)
{
  int	i;

  i = -1;
  if (c == 'c')
    return (1);
  while (tab_cp[++i].c)
    if (tab_cp[i].c == c)
      return (my_c_ctc(str, tab_cp[i].params));
  return (0);
}

t_params	*my_init_p()
{
  t_params	*p;

  p = malloc(sizeof(*p));
  p->is_left = 0;
  p->leftnb = 0;
  p->is_plus = 0;
  p->is_space = 0;
  p->ih = 0;
  p->is_zero = 0;
  p->z_n = 0;
  p->is_number = 0;
  p->nb = 0;
  p->i_d_n = 0;
  p->d_n = 0;
  p->d_wc = 0;
  p->d_wn = 0;
  p->i_wc = 0;
  p->w_v = 0;
  p->is_h = 0;
  p->is_d_l = 0;
  p->is_l = 0;
  p->is_L = 0;
  p->before = 0;
  return (p);
}
