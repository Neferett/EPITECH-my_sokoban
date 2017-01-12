/*
** adress_handler.c for adress_handler in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 12 10:08:58 2016 Bonaldi Jordan
** Last update Thu Dec 15 21:52:28 2016 Bonaldi Jordan
*/

# include "project.h"

static void	set_localadress(t_server *sv, int port)
{
  sv->local.sin_family = AF_INET;
  sv->local.sin_port = htons(port);
  sv->local.sin_addr.s_addr = INADDR_ANY;
  bzero(&(sv->local.sin_zero), 8);
}

static void	set_binding_port(t_server *sv, int port)
{
  if (bind(sv->fd, (struct sockaddr *)&sv->local,
	   sizeof(struct sockaddr)) < 0)
    my_exit("ERROR: Failed to bin PORT:");
  else
    my_printf("[Server] Binding %d on 127.0.0.1 successfully.\n", port);
}

static void	set_listening_port(t_server *sv, int port)
{
  if (listen(sv->fd, 2) < 0)
    my_exit("ERROR: Failed to listen port :");
  else
    my_printf("[Server] Listening successfully %d.\n", port);
}

void	set_addr(t_server *sv, int port)
{
  set_localadress(sv, port);
  set_binding_port(sv, port);
  set_listening_port(sv, port);
}
