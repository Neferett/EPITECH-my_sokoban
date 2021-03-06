/*
** message_handler.c for messages_handler in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Thu Dec 15 21:55:01 2016 Bonaldi Jordan
** Last update Mon Dec 19 23:00:58 2016 Bonaldi Jordan
*/

# include "project.h"

void	message_handler(t_server *sv)
{
  char	message[142];

  sv->size = recv(sv->nfd, message, 142, 0);
  message[sv->size] = 0;
  printf("%d\n", sv->size);
  printf("1 : Sent from %d : %s\n", sv->nfd, message);
  write(sv->nfd2, message, 142);
  memset(message, 0, 142);
  sv->size = recv(sv->nfd2, message, 142, 0);
  message[sv->size] = 0;
  printf("2 : Sent from %d : %s\n", sv->nfd2, message);
  write(sv->nfd,  message, 142);
  if (!sv->size && my_printf("Client disconnected\n"))
    fflush(stdout);
  else if (sv->size < 0)
    perror("ERROR: ");
}
