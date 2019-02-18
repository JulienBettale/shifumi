/*
** my_swap.c for  in /home/guillaumep/rendu_c/Jour03/porott_g/my_swap
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Wed Mar 21 12:50:49 2018 POROTTO Guillaume
** Last update Wed Mar 21 13:07:53 2018 POROTTO Guillaume
*/

void	my_swap(int *a, int *b)
{
  int	valeur;

  valeur = *a;
  *a = *b;
  *b = valeur;
}
