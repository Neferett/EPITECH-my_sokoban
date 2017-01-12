/*
** my_reset.c for my_reset in /home/Neferett/PSU_2016_my_printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Nov 18 16:41:13 2016 Bonaldi Jordan
** Last update Sat Nov 19 20:09:03 2016 Bonaldi Jordan
*/

int	my_reset(char *str)
{
  while (*str && str++);
  return (1);
}
