/*
** arg.c for shifumi in /home/julien/devc/correction_shifumi
** 
** Made by BETTALE Julien
** Login   <bettal_j@etna-alternance.net>
** 
** Started on  Tue Apr  3 20:13:58 2018 BETTALE Julien
** Last update Tue Apr  3 20:55:26 2018 BETTALE Julien
*/

#include "error.h"
#include "arg.h"
#include "bool.h"
#include "my.h"

static int is_num(char *str) // 0 => false, 1 => true
{
  while (*str != '\0')
    {
      if (*str < '0' || *str > '9')
	return (FALSE);
      str += 1; // deplace sur le character suivant;
    }
  return (TRUE);
}

int check_arg(int nb_arg, char **tab, t_game *game)
{
  if (nb_arg != 4)
    return (perror("Invalid Number of Argument.\n"));
  if (my_strcmp(tab[0], "--version") != 0) // si tab[0] != "--version"
    return (perror("Invalid First Argument.\n"));
  if (my_strcmp(tab[1], "classique") == 0)
    game->version = 0;
  else if (my_strcmp(tab[1], "expert") == 0)
    game->version = 1;
  else
    return (perror("Invalid Version.\n"));
  if (my_strcmp(tab[2], "--duree") != 0)
    return (perror("Invalid Second Argument.\n"));
  if (is_num(tab[3]) == TRUE)
    game->duree = my_getnbr(tab[3]);
  else
    return (perror("Invalid Duree.\n"));
  if ((game->duree % 2) == 0)
    return (perror("Invalid Duree.\n"));
  return (0);
}
