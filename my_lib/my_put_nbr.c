/*
** my_put_nbr.c for  in /home/guillaumep/rendu_c/Jour05-06/porott_g/my_put_nbr
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Fri Mar 23 09:46:38 2018 POROTTO Guillaume
** Last update Tue Mar 27 20:11:45 2018 POROTTO Guillaume
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str);

int	get_ten(int n)
{
  int	po;

  po = 1;
  while (po <= n / 10)
    {
      po = po * 10;
    }
  return (po);
}

void	my_put_nbr(int n)
{  
  char	digit;
  int	aff;

  if (n == -2147483648)
    {
      my_putstr("-2147483648");
      return ;
    }
  if (n > -2147483648 && n < 0)
    {
      my_putchar('-');
      n = n * (-1);
    }
  aff = get_ten(n);
  while (aff >= 1)
    {
      digit = n / aff;
      my_putchar(digit + '0');
      n = n % aff;
      aff = aff / 10;
    }
}
