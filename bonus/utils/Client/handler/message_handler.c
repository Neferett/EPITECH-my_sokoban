/*
** message_handler.c for message_handler in /home/Neferett/Client
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Fri Dec 16 11:21:22 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:45:45 2016 Bonaldi Jordan
*/

# include <sys/select.h>
# include "project.h"

char			*message_handler(t_client *cl, char *msg)
{
  fd_set		read;
  char			*rec;
  int			ret;
  struct timeval	tv;

  FD_ZERO(&read);
  FD_SET(cl->fd, &read);
  if (!(rec = malloc(200)))
    exit(84);
  msg[142] = 0;
  if (send(cl->fd, msg, 142, 0) < 0)
    my_printf("ERROR: send failed !\n");
  tv.tv_sec = 0;
  tv.tv_usec = 5;
  if ((ret = select(cl->fd + 1, &read, NULL, NULL, &tv)) <= 0) {}
  else
    {
      if (FD_ISSET(cl->fd, &read))
	ret = recv(cl->fd, rec, 142, 0);
      rec[ret] = '\0';
    }
  return (rec);
}
