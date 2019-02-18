/*
** my_strncpy.c for  in /home/guillaumep/rendu_c/Jour04/porott_g/my_strncpy
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Thu Mar 22 15:00:19 2018 POROTTO Guillaume
** Last update Tue Mar 27 19:29:36 2018 POROTTO Guillaume
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	count;

  count = 0;
  while (n > 0 && *(src + count))
    {
      dest[count] = src[count];
      count++;
      n--;
    }
  dest[count] = '\0';
  return (dest);
}
