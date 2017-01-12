/*
** game_launcher.c for sokoban in /home/Neferett/PSU_2016_my_sokoban/bonus
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Sun Dec 18 20:55:40 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:48:20 2016 Bonaldi Jordan
*/

# include "project.h"

static void		handle_move_event(t_framebuffer *fb)
{
  sfEvent		event;

  while (sfRenderWindow_pollEvent(fb->wd, &event))
    {
      get_pos(fb->sok);
      if (event.type == sfEvtClosed ||
	  (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape))
	sfRenderWindow_close(fb->wd);
      if (event.type == sfEvtKeyPressed && (event.key.code == sfKeyZ ||
					    event.key.code == sfKeyUp))
	set_pos(fb, fb->sok->pos_p->y - 1, fb->sok->pos_p->x, 3);
      if (event.type == sfEvtKeyPressed && (event.key.code == sfKeyS ||
					    event.key.code == sfKeyDown))
	set_pos(fb, fb->sok->pos_p->y + 1, fb->sok->pos_p->x, 4);
      if (event.type == sfEvtKeyPressed && (event.key.code == sfKeyQ ||
					    event.key.code == sfKeyLeft))
	set_pos(fb, fb->sok->pos_p->y, fb->sok->pos_p->x - 1, 1);
      if (event.type == sfEvtKeyPressed && (event.key.code == sfKeyD ||
					    event.key.code == sfKeyRight))
	set_pos(fb, fb->sok->pos_p->y, fb->sok->pos_p->x + 1, 2);
      if (event.type == sfEvtKeyPressed && event.key.code == sfKeySpace)
	fb->sok = initialiser(fb->sok->file);
    }
}

void		solo_game(t_framebuffer *fb)
{

  setter_select(fb, true, false, false);
  fb->wl = false;
  handle_move_event(fb);
  drawer_str(fb, fb->sok->str, 0, false);
}

void		init_text(t_framebuffer *fb)
{
  sfText_setString(fb->t1, "You");
  sfText_setFont(fb->t1, fb->font);
  sfText_setCharacterSize(fb->t1, 150);
  sfText_setColor(fb->t1, sfBlue);
  sfText_setPosition(fb->t1, set_vectorf((W / 2) - 620, (H / 2) - 500));
  sfText_setString(fb->t2, "Opponent");
  sfText_setFont(fb->t2, fb->font);
  sfText_setCharacterSize(fb->t2, 150);
  sfText_setColor(fb->t2, sfRed);
  sfText_setPosition(fb->t2, set_vectorf((W / 2) + 270, (H / 2) - 500));
}

void		multi_game(t_framebuffer *fb)
{
  setter_select(fb, false, true, false);
  fb->wl = false;
  handle_move_event(fb);
  init_text(fb);
  drawer_str(fb, fb->sok->str, 0, true);
  draw_trace(fb);
  fb->sok->str2 = message_handler(fb->cl, fb->sok->str);
  drawer_str(fb, fb->sok->str2, 1200, true);
}
