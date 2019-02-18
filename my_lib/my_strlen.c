/*
** my_strlen.c for  in /home/guillaumep/rendu_c/Jour03/porott_g/my_strlen
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Wed Mar 21 09:14:00 2018 POROTTO Guillaume
** Last update Wed Mar 21 09:33:36 2018 POROTTO Guillaume
*/

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a++;
    }
  return (a);
}

