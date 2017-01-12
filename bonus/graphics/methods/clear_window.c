/*
** clear_window.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 19 13:23:20 2016 Bonaldi Jordan
** Last update Mon Dec 19 14:16:18 2016 Bonaldi Jordan
*/

# include "project.h"

void	clear_window(t_framebuffer *fb)
{
  int	i;

  i = -1;
  while (++i < 1080)
    my_draw_line(fb, set_vector(0, i), set_vector(1920, i), sfBlack);
}
