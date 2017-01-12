/*
** initialiser.c for initialiser in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 12 09:48:49 2016 Bonaldi Jordan
** Last update Thu Dec 15 22:03:56 2016 Bonaldi Jordan
*/

# include "project.h"

t_server	*init(int port)
{
  t_server	*server;

  if (!(server = malloc(sizeof(*server))))
    exit(84);
  create_socket_desc(server);
  set_addr(server, port);
  return (server);
}
