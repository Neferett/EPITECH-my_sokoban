/*
** sokoban.c for sokoba, in /home/Neferett/PSU_2016_my_sokoban
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Tue Dec 13 12:34:42 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:54:08 2016 Bonaldi Jordan
*/

# include "project.h"

void		sokoban(char *str)
{
  t_sok		*sok;

  sok = initialiser(str);
  map_checker(sok->str, sok);
  init_window(sok);
}
