/*
** my_itoa.c for my_itoa in /home/Neferett/PSU_2016_my_printf
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Nov 18 11:55:57 2016 Bonaldi Jordan
** Last update Sun Nov 20 19:41:55 2016 Bonaldi Jordan
*/

void    my_itoa(int nb, char *str, int i)
{
  int   a;

  if (nb >= 10)
    {
      a = nb % 10;
      nb = ((nb - a) / 10);
      my_itoa(nb, str, i++);
      str[i] = a + 48;
    }
  else
    str[i] = nb + 48;
}

void    my_ltoa(long int nb, char *str, int i)
{
  long int   a;

  if (nb >= 10)
    {
      a = nb % 10;
      nb = ((nb - a) / 10);
      my_itoa(nb, str, i++);
      str[i] = a + 48;
    }
  else
    str[i] = nb + 48;
}

void    my_stoa(short int nb, char *str, int i)
{
  short int   a;

  if (nb >= 10)
    {
      a = nb % 10;
      nb = ((nb - a) / 10);
      my_itoa(nb, str, i++);
      str[i] = a + 48;
    }
  else
    str[i] = nb + 48;
}
