/*
** server.c for server in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 12 10:20:30 2016 Bonaldi Jordan
** Last update Fri Dec 16 15:30:56 2016 Bonaldi Jordan
*/

# include "project.h"

char		*client(int port, char *msg)
{
  char		*msgr;
  t_client	*cl;

  cl = init(port);
  msgr = message_handler(cl, msg);
  close(cl->fd);
  return (msgr);
}
