/*
** readline.c for readLine in /home/julien/devc/Shifumi/bettal_j/shifumi
** 
** Made by BETTALE Julien
** Login   <bettal_j@etna-alternance.net>
** 
** Started on  Sat Mar 31 10:13:41 2018 BETTALE Julien
** Last update Tue Apr  3 21:49:52 2018 BETTALE Julien
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char		*readline()
{
  ssize_t	ret;
  char		*buff;

  if((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
