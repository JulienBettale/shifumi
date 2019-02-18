/*
** my_getnbr.c for  in /home/guillaumep/rendu_c/Jour05-06/porott_g/my_getnbr
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Fri Mar 23 15:57:38 2018 POROTTO Guillaume
** Last update Fri Mar 23 20:17:38 2018 POROTTO Guillaume
*/

int	my_getnbr(char *str)
{
  int	count;
  int	valeur;
  int	sign;

  valeur = 0;
  count = 0;
  sign = 1;
  while (str[count] && (str[count] == '-' || str[count] == '+'))
    {
      if (str[count] == '-')
	{
	  sign = sign * (-1);
	}
      count++;
    }
  while (str[count] && str[count] >= '0' && str[count] <= '9')
    {
      valeur = valeur * 10 + str[count] - '0';
      count++;
    }
  return (valeur * sign);
}
