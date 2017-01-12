/*
** initialiser.c for initialiser in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 12 09:48:49 2016 Bonaldi Jordan
** Last update Fri Dec 16 11:24:01 2016 Bonaldi Jordan
*/

# include "project.h"

t_client	*init(int port)
{
  t_client	*client;

  if (!(client = malloc(sizeof(*client))))
    exit(84);
  create_socket_desc(client);
  set_addr(client, port);
  return (client);
}
