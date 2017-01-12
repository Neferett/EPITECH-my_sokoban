/*
1;4601;0c** server.c for server in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 12 10:20:30 2016 Bonaldi Jordan
** Last update Mon Dec 19 23:02:15 2016 Bonaldi Jordan
*/

# include "project.h"

void	server(int port, Boolean mode)
{
  t_server	*sv;

  sv = init(port);
  wait_connection(sv);
  while (true)
    {
      if (mode)
	send_file(sv);
      else
	message_handler(sv);
    }
  close(sv->nfd);
  close(sv->nfd2);
}
