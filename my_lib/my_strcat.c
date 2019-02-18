/*
** my_strcat.c for  in /home/guillaumep/rendu_c/Jour04/porott_g/my_strcat
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Thu Mar 22 19:11:18 2018 POROTTO Guillaume
** Last update Thu Mar 22 19:38:14 2018 POROTTO Guillaume
*/

int     my_strlen(char *str);

char	*my_strcat(char *dest, char *src)
{
  int	count;
  int	count_2;
  
  count_2 = 0;
  count = my_strlen(dest);
  while (src[count_2] != '\0')
    {
      dest[count] = src[count_2];
      count++;
      count_2++;
    }
  dest[count] = '\0';
  return (dest);
}
