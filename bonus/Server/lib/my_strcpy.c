/*
** my_strcpy.c for my_strcpy in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 08:44:26 2016 Bonaldi Jordan
** Last update Sat Nov 26 23:29:49 2016 Bonaldi Jordan
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i += 1;
    }
  dest[i] = '\0';
  return (dest);
}
