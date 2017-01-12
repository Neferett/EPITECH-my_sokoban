/*
1;4601;0c** file_handler.c for file_handler in /home/Neferett/Server
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Dec 12 10:28:16 2016 Bonaldi Jordan
** Last update Sun Dec 18 14:31:15 2016 Bonaldi Jordan
*/

# include "project.h"


void	sending(t_server *sv, int length)
{
  FILE  *fs;

  if (!(sv->filebuf = malloc(length)))
    my_exit("ERROR: ");
  sv->file = "map";
  my_printf("[Server] Sending %s to the Client ...\n", sv->file);
  if (!(fs = fopen(sv->file, "r")))
    my_exit("ERROR: Problem with file:");
  bzero(sv->filebuf, length);
  while ((sv->fs = fread(sv->filebuf, 1, length, fs)) > 0)
    if (send(sv->nfd2, sv->filebuf, sv->fs, 0) < 0)
      my_exit("ERROR: Failed to send the file :");
    else
      bzero(sv->filebuf, length);
  my_printf("[Server] File sent successfully.\n");
}

void	send_file(t_server *sv)
{
  int           write;
  FILE          *fs;

  if (!(sv->filebuf = malloc(4097)))
    my_exit("ERROR: ");
  system("rm -f map");
  sv->file = "map";
  my_printf("[Server] Receiving file %s ...\n", sv->file);
  if (!(fs = fopen(sv->file, "a")))
    my_exit("ERROR: Problem with file:");
  bzero(sv->filebuf, 4096);
  while ((sv->fs = recv(sv->nfd, sv->filebuf, 4096, 0)) > 0)
    {
      if ((write = fwrite(sv->filebuf, sizeof(char), sv->fs, fs)) < sv->fs)
	my_exit("ERROR:");
      bzero(sv->filebuf, 4096);
      if (!sv->fs || sv->fs != 512)
	break;
    }
  if (sv->fs < 0)
    {
      if (errno == EAGAIN && my_printf("[Server] TIME OUT !\n"));
      else
	my_exit("ERROR:");
    }
  my_printf("File received\n");
  fclose(fs);
  sending(sv, 4096);
}
