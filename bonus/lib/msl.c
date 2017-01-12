/*
** msl.c for long len in /home/Neferett/PSU_2016_my_printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Nov 18 12:45:59 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:41:20 2016 Bonaldi Jordan
*/

short int     msl(short int nb)
{
  short int   i;

  i = 0;
  if (nb < 0 && (nb *= -1) && i++) {}
  while (nb > 9)
    if ((nb /= 10) && ++i) {}
  return (++i);
}

long int     mll(long int nb)
{
  long int   i;

  i = 0;
  if (nb < 0 && (nb *= -1) && i++) {}
  while (nb > 9)
    if ((nb /= 10) && ++i) {}
  return (++i);
}
