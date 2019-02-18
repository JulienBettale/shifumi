/*
** my_strcpy.c for  in /home/guillaumep/rendu_c/Jour04/porott_g/my_strcpy
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Thu Mar 22 11:49:31 2018 POROTTO Guillaume
** Last update Thu Mar 22 14:30:23 2018 POROTTO Guillaume
*/

int	my_strlen(char *str);

char	*my_strcpy(char *dest, char *src)
{
  int	count;
  int	longueur;
  
  longueur = my_strlen(src);
  count = 0;
  while (count < longueur)
    {
      dest[count] = src[count];
      count++;
    }
  dest[count] = '\0';
  return (dest);  
}
