/*
** my_isneg.c for  in /home/guillaumep/rendu_c/Jour01/porott_g/my_isneg
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Mon Mar 19 16:25:26 2018 POROTTO Guillaume
** Last update Tue Mar 27 19:54:51 2018 POROTTO Guillaume
*/

#include <unistd.h>

void	my_putchar(char c);

int	my_isneg(int n)
{
  if (n >= 0)
    return (0); 
  else
    return (1);
}
