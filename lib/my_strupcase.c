/*
** my_strupcase.c for my_strupcase in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 10:53:35 2016 Bonaldi Jordan
** Last update Fri Oct 21 23:02:26 2016 Bonaldi Jordan
*/

char	my_toupper(char c);

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      str[i] = my_toupper(str[i]);
      i += 1;
    }
  return (str);
}

char	my_toupper(char c)
{
  if (c >= 'a' && c <= 'z')
    c = c - 32;
  return (c);
}
