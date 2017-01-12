/*
** my_power_rec.c for my_power_rec in /home/Neferett/test
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Oct  7 10:23:40 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:03:21 2016 Bonaldi Jordan
*/

int	my_power_rec(int nb, int p)
{
  if (p <= 0)
    return (p == 0 ? 1 : 0);
  return (nb * my_power_rec(nb, p - 1));
}
