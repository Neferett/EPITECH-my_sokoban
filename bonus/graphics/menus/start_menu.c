/*
** start_menu.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus
**
** Made by root
** Login   <root@epitech.net>
**
** Started on  Sun Dec 18 19:45:50 2016 root
** Last update Tue Dec 20 13:30:04 2016 Bonaldi Jordan
*/

# include "project.h"

void	init_menu(t_framebuffer *fb)
{
  sfText_setString(fb->t1, "Single");
  sfText_setFont(fb->t1, fb->font);
  sfText_setCharacterSize(fb->t1, 150);
  sfText_setColor(fb->t1, !fb->sel ? sfRed : sfWhite);
  sfText_setPosition(fb->t1, set_vectorf((W / 2) - (300 / 2), (H / 2) - 400));
  sfText_setString(fb->t2, "MultiPlayer");
  sfText_setFont(fb->t2, fb->font);
  sfText_setCharacterSize(fb->t2, 150);
  sfText_setColor(fb->t2, fb->sel == 1 ? sfRed : sfWhite);
  sfText_setPosition(fb->t2, set_vectorf((W / 2) - (650 / 2), (H / 2) - 200));
  sfText_setString(fb->t3, "Settings");
  sfText_setFont(fb->t3, fb->font);
  sfText_setCharacterSize(fb->t3, 150);
  sfText_setColor(fb->t3, fb->sel == 2 ? sfRed : sfWhite);
  sfText_setPosition(fb->t3, set_vectorf((W / 2) - (350 / 2), (H / 2)));
  sfText_setString(fb->t4, "Quit");
  sfText_setFont(fb->t4, fb->font);
  sfText_setCharacterSize(fb->t4, 150);
  sfText_setColor(fb->t4, fb->sel == 3 ? sfRed : sfWhite);
  sfText_setPosition(fb->t4, set_vectorf((W / 2) - (250 / 2), (H / 2) + 200));
}

void		handle_menu_event(t_framebuffer *fb)
{
  sfEvent	event;

  init_menu(fb);
  while (sfRenderWindow_pollEvent(fb->wd, &event))
    {
      if (event.type == sfEvtClosed ||
	  (event.type == sfEvtKeyPressed &&
	   (event.key.code == sfKeyEscape ||
	    (event.key.code == sfKeyReturn && fb->sel == 3))))
	sfRenderWindow_close(fb->wd);
      if (event.type == sfEvtKeyPressed && event.key.code == sfKeyUp)
	!fb->sel ? 1 : fb->sel--;
      if (event.type == sfEvtKeyPressed && event.key.code == sfKeyDown)
	fb->sel == 3 ? 1 : fb->sel++;
      if (event.type == sfEvtKeyPressed && event.key.code == sfKeyReturn)
	{
	  if (!fb->sel)
	    solo_game(fb);
	  else if (fb->sel == 1)
	    {
	      fb->cl = init(12000);
	      multi_game(fb);
	    }
	}
    }
}
