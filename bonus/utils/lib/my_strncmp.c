/*
** my_strncmp.c for my_strncmp in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 10:25:18 2016 Bonaldi Jordan
** Last update Fri Oct 21 23:01:58 2016 Bonaldi Jordan
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n && s1[i])
    {
      if (s1[i] > s2[i] || s2[i] > s1[i])
	return (s1[i] - s2[i]);
      i += 1;
    }
  return (0);
}
