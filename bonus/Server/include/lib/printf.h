/*
** printf.h for printf.h in /home/Neferett/printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sat Oct 22 12:34:47 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:42:43 2016 Bonaldi Jordan
*/

#ifndef check
#define check

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "lib.h"

#define US unsigned
#define B_OC "01234567\0"
#define B_hex "0123456789abcdef\0"
#define B_HEX "0123456789ABCDEF\0"

typedef	struct		s_params
{
  int			is_left;
  int			before;
  int			leftnb;
  int			is_plus;
  int			is_space;
  int			ih;
  int			is_zero;
  int			z_n;
  int			is_number;
  int			nb;
  int			i_d_n;
  int			d_n;
  int			d_wc;
  int			d_wn;
  int			i_wc;
  int			w_v;
  int			is_h;
  int			is_d_l;
  int			is_l;
  int			is_L;
}			t_params;

typedef	struct		s_methods
{
  char		c;
  void		(*methods)(va_list, t_params *);
}			t_methods;

typedef struct		s_char_params
{
  char			c;
  char			*params;
}			t_cp;

int	my_printf(char *, ...);
int	select_methods(char , va_list, char *);
int     get_assignement(char);
int	get_params(char);
void	int_decimal(va_list, t_params *);
void    int_octal(va_list, t_params *);
void    int_hex(va_list, t_params *);
void	int_hex_maj(va_list, t_params *);
void    int_unsigned(va_list, t_params *);
void	binary_methods(va_list, t_params *);
void	chars_char(va_list, t_params *);
void	chars_string(va_list, t_params *);
void	pointer(va_list, t_params *);
void	chars_print(va_list, t_params *);
int	percentage();
int	my_c_ctc(char *, char *);
int	nb(char *, int);
t_params	*set_params(char *, va_list);
t_params	*my_init_p();
int	my_setter(char *, int, t_params *, va_list);
int	my_match(char *, char);
int	nb(char *, int);
int	mil(int);
int	mis(char);
int	print_p(char, int, int*);
int	my_check(char, char *, t_params *);
int	left_pr(int, t_params *);
int	milu(unsigned int);
t_methods *init_methods(t_methods *);
int	my_d(char, char *, t_params *);

#endif
