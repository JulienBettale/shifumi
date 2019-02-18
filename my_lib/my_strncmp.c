/*
** my_strncmp.c for  in /home/guillaumep/rendu_c/Jour04/porott_g/my_strncmp
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Thu Mar 22 17:23:22 2018 POROTTO Guillaume
** Last update Tue Mar 27 20:10:57 2018 POROTTO Guillaume
*/

int    my_strncmp(char *s1, char *s2, int n)
{
  int   i;
  int   count;

  i = 0;
  count = 0;
  while (count == 0 && i < n)
    {
      if (s1[i] > s2[i])
	count = 1;
      else if (s1[i] < s2[i])
	count = -1;
      if (s1[i] == '\0')
	break;
      i++;
    }
  return (count);
}
