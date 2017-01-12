/*
** utils.c for utils in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 12 09:52:59 2016 Bonaldi Jordan
** Last update Mon Dec 12 10:59:50 2016 Bonaldi Jordan
*/

# include "project.h"

void	my_exit(char *str)
{
  perror(str);
  exit(84);
}
