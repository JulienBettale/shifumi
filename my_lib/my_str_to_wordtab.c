/*
** my_str_to_wordtab.c for Jour07/porott_g/my_str_to_wordtab
** 
** Made by POROTTO Guillaume
** Login   <porott_g@etna-alternance.net>
** 
** Started on  Tue Mar 27 13:15:19 2018 POROTTO Guillaume
** Last update Wed Mar 28 09:32:22 2018 POROTTO Guillaume
*/

#include <unistd.h>
#include <stdlib.h>

char	*my_strncpy(char *dest, char *src, int n);

int	check(char c)
{
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
    return(1);
  return(0);
}

int	count_word(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
  {
     if (check(str[i]) == 1 && check(str[i + 1]) == 0)
     {
      count++;
     }
    i++;
  }
  return(count);
}

int	my_strlen_word(char *str)
{
  int	i;
  int	size_w;

  size_w = 0;
  i = 0;
  while (check(str[i]) != 0)
    {
      i++;
      size_w++;
    }
  return (size_w);
}

char	*my_strdup_word(char *str)
{
  char	*new;

  new = malloc((my_strlen_word(str) + 1) * sizeof(char));
  my_strncpy(new, str, my_strlen_word(str));
  return (new);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	size;
  char	**tab;

  i = 0;
  size = count_word(str);
  tab = malloc((size + 1) * sizeof(char *));
  while (i < size)
  {
    while (!check(*str))
      {
	str++;
      }
    tab[i] = my_strdup_word(str);
    str += my_strlen_word(str);
    i++;
  }
  tab[i] = NULL;
  return (tab);
}
