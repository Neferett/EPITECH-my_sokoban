/*
** my_fact_rec.c for my_fact_rec in /home/Neferett/test
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Oct  7 09:59:35 2016 Bonaldi Jordan
** Last update Mon Oct 10 10:10:44 2016 Bonaldi Jordan
*/

int	my_fact_rec(int n)
{
  int	value;

  if (n < 0)
    return (0);
  if (n == 0)
    return (1);
  if (n > 12)
    return (0);
  value = n * my_fact_rec(n - 1);
  return (value);
}
