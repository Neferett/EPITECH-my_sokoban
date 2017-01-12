/*
** state_handle.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Sun Dec 18 20:58:40 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:49:16 2016 Bonaldi Jordan
*/

# include "project.h"

void	setter_select(t_framebuffer *fb, Boolean state1,
		      Boolean state2, Boolean state3)
{
  fb->single = state1;
  fb->multiplayer = state2;
  fb->settings = state3;
}
