/*
** sokoban.c for sokoba, in /home/Neferett/PSU_2016_my_sokoban
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Tue Dec 13 12:34:42 2016 Bonaldi Jordan
** Last update Tue Dec 20 21:57:17 2016 Bonaldi Jordan
*/

# include "project.h"

static void	checker(t_sok *sok, int o)
{
  if (o == sok->in_box && !wclear(stdscr) &&
	   !mvprintw(0, 0, "You won !"))
    {
      refresh();
      usleep(2000000);
      endwin();
      exit(0);
    }
}

static void	display_in(t_sok *sok, int o, char *str)
{
  int		i;

  while ((i = getch()) != 27)
    {
      wclear(stdscr);
      if (COLS < sok->l_x || LINES < sok->l_y)
	mvprintw(0, 0, "Please expand the window..");
      else
	{
	  mvprintw(0, 0, sok->str);
	  get_pos(sok);
	  if ((i == 260 &&
	       set_pos(sok, sok->pos_p->y, sok->pos_p->x - 1, 1)) ||
	      (i == 261 &&
	       set_pos(sok, sok->pos_p->y, sok->pos_p->x + 1, 2)) ||
	      (i == 259 &&
	       set_pos(sok, sok->pos_p->y - 1, sok->pos_p->x, 3)) ||
	      (i == 258 &&
	       set_pos(sok, sok->pos_p->y + 1, sok->pos_p->x, 4)))
	    mvprintw(0, 0, sok->str);
	  else if (i == 32 && (sok = initialiser(str)))
	    mvprintw(0, 0, sok->str);
	  checker(sok, o);
	}
    }
}

void		sokoban(char *str)
{
  t_sok		*sok;
  int		o;

  sok = initialiser(str);
  if ((nb_of(sok->str, 'P') != 1 || !nb_of(sok->str, 'O')
       || !nb_of(sok->str, 'X') ||
       !nb_of(sok->str, '#') ||
       nb_of(sok->str, 'X') != nb_of(sok->str, 'O'))
      && mvprintw(0, 0, "Wrong map format !\n"))
    exit(84);
  map_checker(sok);
  initscr();
  noecho();
  curs_set(0);
  keypad(stdscr, TRUE);
  attron(A_BOLD);
  mvprintw(0, 0, sok->str);
  o = nb_of(sok->str, 'O');
  display_in(sok, o, str);
  endwin();
}
