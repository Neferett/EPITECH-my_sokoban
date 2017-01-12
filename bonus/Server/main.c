/*
** main.c for main in /home/Neferett/bin/IMPORT
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Nov 14 14:04:13 2016 Bonaldi Jordan
** Last update Sun Dec 18 12:48:11 2016 Bonaldi Jordan
*/

#include "project.h"

int	main(int argc, char **argv)
{
  if (argc > 5)
    return (84);
  if (*argv[1] == '-' && argv[1][1] == 'f')
    server(my_getnbr(argv[2]), true);
  if (*argv[1] == '-' && argv[1][1] == 'm')
    server(my_getnbr(argv[2]), false);
  return (0);
}
