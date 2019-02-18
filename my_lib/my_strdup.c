/*
** my_strdup.c for  in /home/guillaumep/rendu_c/Jour07/porott_g/my_strdup
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Mon Mar 26 14:50:08 2018 POROTTO Guillaume
** Last update Mon Mar 26 16:31:18 2018 POROTTO Guillaume
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char	*tab;

  tab = malloc(sizeof(char) * my_strlen(str));
  my_strcpy(tab, str);
  return (tab);
}
