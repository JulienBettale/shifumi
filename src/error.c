/*
** error.c for shifumi in /home/julien/devc/correction_shifumi
** 
** Made by BETTALE Julien
** Login   <bettal_j@etna-alternance.net>
** 
** Started on  Tue Apr  3 20:44:33 2018 BETTALE Julien
** Last update Tue Apr  3 20:55:37 2018 BETTALE Julien
*/

#include "error.h"
#include "my.h"

int perror(char *msg)
{
  my_putstr(msg);
  return (1);
}
