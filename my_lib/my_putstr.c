/*
** my_putstr.c for  in /home/guillaumep/rendu_c/Jour03/porott_g/my_putstr
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Wed Mar 21 09:36:48 2018 POROTTO Guillaume
** Last update Wed Mar 21 10:27:32 2018 POROTTO Guillaume
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str)
{
  if (*str != '\0')
    {
      my_putchar(*str);
      my_putstr(str + 1);
    }
}
