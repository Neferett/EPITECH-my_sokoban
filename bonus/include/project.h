/*
** project.h for project_header in /home/Neferett/bin/IMPORT/include
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Nov 21 01:13:04 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:56:52 2016 Bonaldi Jordan
*/

#ifndef H_CHECK
# define H_CHECK

# define W 1920
# define H 1080

# include "lib.h"
# include <math.h>
# include <SFML/Graphics.h>
# include <ncurses/curses.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <strings.h>
# include <sys/types.h>
# include <netinet/in.h>
# include <sys/wait.h>
# include <sys/socket.h>
# include <signal.h>
# include <ctype.h>
# include <arpa/inet.h>
# include <netdb.h>

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
  char			*file;
  char			*buf;
  char			*str;
  char			*str2;
  char			*origin;
}			t_sok;

typedef struct          s_client
{
  int                   fd;
  int                   nfd;
  int                   num;
  int                   fs;
  struct sockaddr_in    local;
  struct sockaddr_in    server;
  char                  *buf;
  char                  *file;
  char                  *filebuf;
}                       t_client;

typedef struct          s_my_framebuffer
{
  Boolean		single;
  Boolean		wl;
  Boolean		win;
  Boolean		first_init;
  Boolean		multiplayer;
  Boolean		settings;
  int			sel;
  sfUint8*		pixels;
  sfVideoMode		mode;
  sfRenderWindow	*wd;
  sfFont		*font;
  sfTexture		*texture;
  sfSprite		*sprite;
  sfText		*t1;
  sfText		*t2;
  sfText		*t3;
  sfText		*t4;
  int			width;
  int			height;
  t_sok			*sok;
  t_client		*cl;
  int			x;
  int			y;
}			t_framebuffer;

char		get_char_pos(t_sok *, int, int);
void		display_sok(t_sok *);
void		sokoban(char *);
void		get_pos(t_sok *);
Boolean		map_checker(char *, t_sok *);
Boolean		set_pos(t_framebuffer *, int, int, int);
t_sok		*initialiser(char *);
t_pos		*initialiser_pos();
int		converter(t_sok *, int, int);
int		converter_str(char *, int, int);
char            *client(int, char *);
char            *message_handler(t_client *, char *);
void            set_addr(t_client *, int);
void            send_file(t_client *, char *, int);
void            create_socket_desc(t_client *);
void            wait_connection(t_client *);
void            my_exit(char *);
t_client        *init(int);
sfVector2i      set_vector(int, int);
sfVector2f      set_vectorf(int, int);
void		my_put_pixel(t_framebuffer *, int, int, sfColor);
t_framebuffer   *my_framebuffer_create(t_sok *);
void            drawer_str(t_framebuffer *, char *, int, Boolean);
void		draw_trace(t_framebuffer *);
void		my_draw_line(t_framebuffer *, sfVector2i, sfVector2i, sfColor);
sfVideoMode	set_mode(int, int, int);
void		init_window(t_sok *);
void		init_menu(t_framebuffer *);
void		handle_menu_event(t_framebuffer *);
void		disp_screen(t_framebuffer *);
void		solo_game(t_framebuffer *);
void		multi_game(t_framebuffer *);
void		setter_select(t_framebuffer *, Boolean, Boolean, Boolean);
void		reset_screen(t_framebuffer *);
void		handle_game_menu_event(t_framebuffer *);
void		clear_window(t_framebuffer *);
int		entire_check(char *, t_sok *);

#endif
