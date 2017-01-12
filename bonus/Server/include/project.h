/*
** project.h for project_header in /home/Neferett/bin/IMPORT/include
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Nov 21 01:13:04 2016 Bonaldi Jordan
** Last update Mon Dec 19 17:03:54 2016 Bonaldi Jordan
*/

#ifndef H_CHECK
# define H_CHECK

# include "lib.h"

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

typedef struct		s_server
{
  int			fd;
  int			size;
  int			nfd;
  char			*ip;
  int			nfd2;
  int			num;
  int			fs;
  struct sockaddr_in    local;
  struct sockaddr_in	server;
  char			*buf;
  char			*file;
  char			*filebuf;
}			t_server;

void		server(int, Boolean);
void		set_addr(t_server *, int);
void		send_file(t_server *);
void		message_handler(t_server *);
void		create_socket_desc(t_server *);
void		wait_connection(t_server *);
void		my_exit(char *);
t_server	*init(int);

#endif
