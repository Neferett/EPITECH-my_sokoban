/*
** window_handler.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus/graphics
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Fri Dec 16 23:20:31 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:57:01 2016 Bonaldi Jordan
*/

# include "project.h"

static void  checker(t_framebuffer *fb, int o)
{
  if (fb->multiplayer && *fb->sok->str2 == '#')
    {
      if (o == entire_check(fb->sok->str2, fb->sok) && (fb->wl = true)
	  && !(fb->win = false) && (fb->sel = 0))
	fb->sok = initialiser(fb->sok->file);
    }
  if (o == fb->sok->in_box && !usleep(1000000) && (fb->wl = true)
      && (fb->win = true) && (fb->sel = 1))
    fb->sok = initialiser(fb->sok->file);
  else if (!map_checker(fb->sok->str, fb->sok)
	   && !usleep(1000000) && (fb->wl = true)
	   && !(fb->win = false) && (fb->sel = 1))
    fb->sok = initialiser(fb->sok->file);
}

void            display_window(t_framebuffer *fb)
{
  checker(fb, nb_of(fb->sok->origin, 'O'));
  if (fb->wl)
    handle_game_menu_event(fb);
  else if (!fb->single && !fb->multiplayer && !fb->settings)
    handle_menu_event(fb);
  else if (fb->single)
    solo_game(fb);
  else if (fb->multiplayer)
    multi_game(fb);
  disp_screen(fb);
}

void    init_window(t_sok *sok)
{
  t_framebuffer		*fb;

  fb = my_framebuffer_create(sok);
  init_menu(fb);
  fb->first_init = false;
  setter_select(fb, false, false, false);
  while (sfRenderWindow_isOpen(fb->wd))
    display_window(fb);
  sfRenderWindow_destroy(fb->wd);
}
