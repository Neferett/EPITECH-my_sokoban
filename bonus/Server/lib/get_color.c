/*
** get_color.c for get_color in /home/Neferett/CPool_Day09/task05
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Thu Oct 13 15:42:59 2016 Bonaldi Jordan
** Last update Thu Nov 24 11:43:08 2016 Bonaldi Jordan
*/
int	get_color(char red, char green, char blue)
{
  int	color;

  color = red;
  color = color << 8;
  color += green;
  color = color << 8;
  color += blue;
  return (color);
}
