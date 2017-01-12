/*
** init.c for init in /home/Neferett/PSU_2016_my_printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sat Nov 19 19:21:21 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:29:22 2016 Bonaldi Jordan
*/

#include "printf.h"

t_methods	*init_methods(t_methods *methods)
{
  if (!(methods = malloc(sizeof(*methods) * 12)))
      return (NULL);
  if ((methods[0].c = 'd') && (methods[0].methods = &int_decimal)) {}
  if ((methods[1].c = 'i') && (methods[1].methods = &int_decimal)) {}
  if ((methods[2].c = 'o') && (methods[2].methods = &int_octal)) {}
  if ((methods[3].c = 'x') && (methods[3].methods = &int_hex)) {}
  if ((methods[4].c = 'X') && (methods[4].methods = &int_hex_maj)) {}
  if ((methods[5].c = 'u') && (methods[5].methods = &int_unsigned)) {}
  if ((methods[6].c = 'c') && (methods[6].methods = &chars_char)) {}
  if ((methods[7].c = 's') && (methods[7].methods = &chars_string)) {}
  if ((methods[8].c = 'p') && (methods[8].methods = &pointer)) {}
  if ((methods[9].c = 'S') && (methods[9].methods = &chars_print)) {}
  if ((methods[10].c = 'b') && (methods[10].methods = &binary_methods)) {}
  if ((methods[11].c = '\0') && (methods[11].methods = NULL)) {}
  return (methods);
}
