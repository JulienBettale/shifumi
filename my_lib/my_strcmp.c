/*
** strcmp.c for  in /home/guillaumep/rendu_c/Jour04/porott_g/my_strcmp
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Thu Mar 22 16:35:20 2018 POROTTO Guillaume
** Last update Tue Mar 27 20:20:39 2018 POROTTO Guillaume
*/

int    my_strcmp(char *s1, char *s2)
{
  int    cpt;
  int    resultat;

  cpt = 0;
  while ((s1[cpt] == s2[cpt]) && (s1[cpt] != '\0') && (s2[cpt] != '\0'))
    cpt++;
  if (s1[cpt] > s2[cpt] || s2[cpt] == '\0')
    resultat = 1;
  else
    resultat = -1;
  if (s1[cpt] == s2[cpt])
    resultat = 0;
  return (resultat);
}
