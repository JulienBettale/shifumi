/*
** my_putchar.c for  in /home/guillaumep/rendu_c/Jour01/porott_g/my_putchar
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Mon Mar 19 11:12:14 2018 POROTTO Guillaume
** Last update Mon Mar 19 15:12:17 2018 POROTTO Guillaume
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

