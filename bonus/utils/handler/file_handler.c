/*
** file_handler.c for file_handler in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 12 10:28:16 2016 Bonaldi Jordan
** Last update Tue Dec 20 22:45:15 2016 Bonaldi Jordan
*/

# include "project.h"

void	send_file(t_server *sv, char *file, int length)
{
  int	write;
  FILE  *fs;

  if (!(sv->filebuf = malloc(length)))
    my_exit("ERROR: ");
  sv->file = file;
  if (!(fs = fopen(sv->file, "a")))
    my_exit("ERROR: Problem with file:");
  bzero(sv->filebuf, length);
  while ((sv->fs = recv(sv->fd, sv->filebuf, length, 0)) > 0)
    {
      if ((write = fwrite(sv->filebuf, sizeof(char), sv->fs, fs)) < sv->fs)
	my_exit("ERROR:");
      bzero(sv->filebuf, length);
      if (!sv->fs || sv->fs != 512)
	break;
    }
  if (sv->fs < 0)
    {
      if (errno == EAGAIN && my_printf("[Client] TIME OUT !\n"));
      else
	my_exit("ERROR:");
    }
  fclose(fs);
  close(sv->fd);
}
