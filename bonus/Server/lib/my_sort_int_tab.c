/*
** my_sort_int_tab.c for my_sort_int_tab in /home/Neferett/CPool_Day04
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Thu Oct  6 16:19:03 2016 Bonaldi Jordan
** Last update Thu Oct 20 10:00:16 2016 Bonaldi Jordan
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;
  int	m;
  int	temp;

  i = 0;
  while (i < size)
    {
      j = i + 1;
      while (j < size)
	{
	  if (tab[j] < tab[i])
	    {
	      m = j;
	      temp = tab[m];
	      tab[m] = tab[i];
	      tab[i] = temp;
	    }
	  j += 1;
	}
      i += 1;
    }
}
