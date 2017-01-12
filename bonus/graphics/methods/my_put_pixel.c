/*
** my_put_pixel.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Dec 16 23:46:35 2016 Bonaldi Jordan
** Last update Fri Dec 16 23:46:47 2016 Bonaldi Jordan
*/

# include "project.h"

void    my_put_pixel(t_framebuffer* fb, int x, int y, sfColor color)
{
  fb->pixels[((fb->width * y) + x) * 4] = color.r;
  fb->pixels[((fb->width * y) + x) * 4 + 1] = color.g;
  fb->pixels[((fb->width * y) + x) * 4 + 2] = color.b;
  fb->pixels[((fb->width * y) + x) * 4 + 3] = color.a;
}
