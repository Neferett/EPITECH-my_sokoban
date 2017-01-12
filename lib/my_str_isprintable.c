/*
** my_str_isprintable.c for my_str_isprintable in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 11:28:39 2016 Bonaldi Jordan
** Last update Fri Oct 21 23:00:45 2016 Bonaldi Jordan
*/

int	my_str_isprintable(char *str)
{
  int	i;
  int	value;

  i = 0;
  value = 1;
  while (str[i])
    {
      if (!(str[i] >= 32 && str[i] <= 126))
	value = 0;
      i += 1;
    }
  return (value);
}
