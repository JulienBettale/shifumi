/*
** list.h for shifumi in /home/julien/devc/correction_shifumi
** 
** Made by BETTALE Julien
** Login   <bettal_j@etna-alternance.net>
** 
** Started on  Tue Apr  3 21:47:17 2018 BETTALE Julien
** Last update Tue Apr  3 21:48:49 2018 BETTALE Julien
*/

#ifndef LIST_H_
# define LIST_H_

#include "game.h"

t_play_list	*add_to_list(t_play_list *, char *);
void		print_list(t_play_list *);
void		delete_list(t_play_list *);

#endif /* !LIST_H_ */
