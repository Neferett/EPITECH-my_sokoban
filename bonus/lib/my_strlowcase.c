/*
** my_strupcase.c for my_strupcase in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 10:53:35 2016 Bonaldi Jordan
** Last update Mon Oct 10 22:33:42 2016 Bonaldi Jordan
*/
char	my_tolowercase(char c);

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      str[i] = my_tolowercase(str[i]);
      i += 1;
    }
  return (str);
}

char	my_tolowercase(char c)
{
  if (c >= 'A' && c <= 'Z')
    c = c + 32;
  return (c);
}
