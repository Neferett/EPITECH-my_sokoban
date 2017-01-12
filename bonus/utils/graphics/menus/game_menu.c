/*
** start_menu.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus
**
** Made by root
** Login   <root@epitech.net>
**
** Started on  Sun Dec 18 19:45:50 2016 root
** Last update Tue Dec 20 22:50:18 2016 Bonaldi Jordan
*/

# include "project.h"

void	init_game_menu(t_framebuffer *fb)
{
  sfText_setString(fb->t1, fb->win ? "You won !" : "You lost !");
  sfText_setFont(fb->t1, fb->font);
  sfText_setCharacterSize(fb->t1, 150);
  sfText_setColor(fb->t1, sfWhite);
  sfText_setPosition(fb->t1, set_vectorf((W / 2) - (600 / 2), (H / 2) - 400));
  sfText_setString(fb->t2, fb->win ? "Play again" : "Try again");
  sfText_setFont(fb->t2, fb->font);
  sfText_setCharacterSize(fb->t2, 150);
  sfText_setColor(fb->t2, fb->sel == 1 ? sfRed : sfWhite);
  sfText_setPosition(fb->t2, set_vectorf((W / 2) - (400 / 2), (H / 2) - 200));
  sfText_setString(fb->t3, "Back to menu");
  sfText_setFont(fb->t3, fb->font);
  sfText_setCharacterSize(fb->t3, 150);
  sfText_setColor(fb->t3, fb->sel == 2 ? sfRed : sfWhite);
  sfText_setPosition(fb->t3, set_vectorf((W / 2) - (550 / 2), (H / 2)));
  sfText_setString(fb->t4, "Quit");
  sfText_setFont(fb->t4, fb->font);
  sfText_setCharacterSize(fb->t4, 150);
  sfText_setColor(fb->t4, fb->sel == 3 ? sfRed : sfWhite);
  sfText_setPosition(fb->t4, set_vectorf((W / 2) - (200 / 2), (H / 2) + 200));
}

void		handle_game_menu_event(t_framebuffer *fb)
{
  sfEvent	event;

  init_game_menu(fb);
  clear_window(fb);
  setter_select(fb, false, false, false);
  while (sfRenderWindow_pollEvent(fb->wd, &event))
    {
      if (event.type == sfEvtClosed ||
	  (event.type == sfEvtKeyPressed &&
	   (event.key.code == sfKeyEscape ||
	    (event.key.code == sfKeyReturn && fb->sel == 3))))
	sfRenderWindow_close(fb->wd);
      if (event.type == sfEvtKeyPressed && event.key.code == sfKeyUp)
	fb->sel == 1 ? 1 : fb->sel--;
      if (event.type == sfEvtKeyPressed && event.key.code == sfKeyDown)
	fb->sel == 3 ? 1 : fb->sel++;
      if (event.type == sfEvtKeyPressed && event.key.code == sfKeyReturn)
	{
	  if (fb->sel == 1)
	    solo_game(fb);
	  else if (fb->sel == 2 && !(fb->wl = false) && !(fb->sel = 0))
	    setter_select(fb, false, false, false);
	}
    }
}
