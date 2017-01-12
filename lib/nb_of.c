/*
** nb_of.c for nb_of in /home/Neferett/PSU_2016_my_ls_bootstrap/lib
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Nov 21 13:20:11 2016 Bonaldi Jordan
** Last update Mon Nov 21 13:21:23 2016 Bonaldi Jordan
*/

int	nb_of(char *str, char c)
{
  int	i;

  i = 0;
  while (*str)
    {
      if (*str == c && ++i) {}
      str++;
    }
  return (i);
}
