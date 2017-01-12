/*
** project.h for project_header in /home/Neferett/bin/IMPORT/include
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Nov 21 01:13:04 2016 Bonaldi Jordan
** Last update Wed Dec 21 06:53:15 2016 Bonaldi Jordan
*/

#ifndef H_CHECK
# define H_CHECK

# define _DEFAULT_SOURCE

# include "lib.h"
# include <ncurses/curses.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_pos
{
  int			x;
  int			y;
}			t_pos;

typedef struct		s_sokoban
{
  int			l_x;
  int			l_y;
  int			fd;
  int			in_box;
  Boolean		c_o;
  Boolean		x_o;
  int			x_pos;
  int			c_pos;
  t_pos			*pos_p;
  char			*buf;
  char			*str;
  char			*origin;
}			t_sok;

char	get_char_pos(t_sok *, int, int);
void	display_sok(t_sok *);
void	sokoban(char *);
void	get_pos(t_sok *);
Boolean	map_checker(t_sok *);
Boolean	set_pos(t_sok *, int, int, int);
t_sok	*initialiser(char *);
t_pos	*initialiser_pos();
int	converter(t_sok *, int, int);
#endif
