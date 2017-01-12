/*
** main.c for main in /home/Neferett/bin/IMPORT
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Nov 14 14:04:13 2016 Bonaldi Jordan
** Last update Mon Dec 19 17:11:23 2016 Bonaldi Jordan
*/

#include "project.h"

int	main(int argc, char **argv)
{
  if (argc != 2)
    return (84);
  if (*argv[1] == '-' && argv[1][1] == 'h')
    {
      my_printf("USAGE\n");
      my_printf("\t\t./my_sokoban map\n\n");
      my_printf("DESCRIPTION\n");
      my_printf("\t\tmap\tfile representing the warehouse map, "
		"containing '#' for walls,\n\t\t\t'P' for the player"
		", 'X' for boxes and 'O' for storage locations.\n");
      return (84);
    }
  else
    sokoban(argv[1]);
  return (0);
}
