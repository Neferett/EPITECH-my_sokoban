/*
** match.c for match in /home/Neferett/CPool_match-nmatch
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sun Oct 16 16:15:51 2016 Bonaldi Jordan
** Last update Sun Oct 16 18:09:09 2016 Bonaldi Jordan
*/

int	match(char *s1, char *s2)
{
  if (!*s1 && !*s2)
    return (1);
  if (*s2 == '*' || *s2 == '?')
    {
      if (!*s1)
	return (match(s1, s2 + 1));
      else
	return (match(s1 + 1, s2) || match(s1, s2 + 1));
    }
  if (*s1 != *s2)
    return (0);
  return (match(s1 + 1, s2 + 1));
}
