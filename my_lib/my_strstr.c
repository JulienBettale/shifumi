/*
** my_strstr.c for  in /home/guillaumep/Libmy/porott_g/libmy_02
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Tue Mar 27 20:20:37 2018 POROTTO Guillaume
** Last update Fri Mar 30 09:55:29 2018 POROTTO Guillaume
*/

#include <stdlib.h>
#include <unistd.h>

int	my_strlen(char *str);
int	my_strncmp(char *s1,char *s2,int n);
int	my_strcmp(char *str, char *to_find);

char    *my_strstr(char *str, char *to_find)
{
  int   i;
  int   l;
  int   res;

  i = 0;
  l = my_strlen(to_find);
  if (
      my_strcmp(str, "") == 0 && my_strcmp(to_find, "") == 0)
    return(str);
  while (str[i] != '\0')
    {
      res = my_strncmp((str + i), to_find, l);
      if (res != 0)
        {
          i = i + 1;
        }
      else
      {
        return (str + i);
      }
    }
  return (NULL);
}
