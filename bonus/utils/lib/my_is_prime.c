/*
** my_is_prime.c for my_is_prime in /home/Neferett/test
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Oct  7 14:09:35 2016 Bonaldi Jordan
** Last update Thu Oct 20 10:02:36 2016 Bonaldi Jordan
*/

int	my_is_prime(int nb)
{
  int	i;
  int	value;

  i = 2;
  value = 1;
  if (nb == 0)
    return (0);
  if (nb == 1)
    return (0);
  while (i != nb)
    {
      if (i != nb && nb % i == 0)
	value = 0;
      i += 1;
    }
  return (value);
}
