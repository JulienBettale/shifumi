/*
** main.c for main in /home/julien/devc/correction_shifumi
** 
** Made by BETTALE Julien
** Login   <bettal_j@etna-alternance.net>
** 
** Started on  Tue Apr  3 19:31:50 2018 BETTALE Julien
** Last update Tue Apr  3 22:08:26 2018 BETTALE Julien
*/

#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "arg.h"

int		main(int ac, char *av[])
{
  t_game	game;

  if (check_arg(ac - 1, av + 1, &game) != 0)
    return (1);
  srand(time(NULL));
  run(&game);
  
  return (0);
}
