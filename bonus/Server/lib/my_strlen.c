/*
** my_strlen.c for my_strlen in /home/Neferett/CPool_Day04
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Thu Oct  6 09:06:34 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:05:26 2016 Bonaldi Jordan
*/
#include <stdio.h>

int	my_strlen(char *str)
{
  return (*str ? my_strlen(++str) + 1 : 0);
}
