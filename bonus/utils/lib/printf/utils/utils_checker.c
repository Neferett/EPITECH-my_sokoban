/*
** utils_checker.c for utils_checker in /home/Neferett/CPool_bistro-matic
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Fri Nov  4 16:22:46 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:26:16 2016 Bonaldi Jordan
*/

int	check_str_char(char c, char *nbr)
{
  while (*nbr)
    {
      if (c == *nbr)
	return (1);
      nbr += 1;
    }
  return (0);
}

char	*rd(char c, char *str)
{
  while (*str != c && ++str);
  return (str);
}

int	my_c_ctc(char *str1, char *str2)
{
  int	i;
  int	j;

  i = -1;
  j = 1;
  while (str1[++i])
    if (!check_str_char(str1[i], str2) && (j = 0)) {}
  return (j);
}
