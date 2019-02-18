/*
** game.h for shifumi in /home/julien/devc/correction_shifumi
** 
** Made by BETTALE Julien
** Login   <bettal_j@etna-alternance.net>
** 
** Started on  Tue Apr  3 20:04:27 2018 BETTALE Julien
** Last update Tue Apr  3 21:59:06 2018 BETTALE Julien
*/

#ifndef GAME_H_
# define GAME_H_

typedef struct s_game		t_game;
typedef struct s_play_list	t_play_list;

struct	s_game
{
  int 	version; // O -> classique, 1 -> expert
  int	duree;
  int	player_score;
  int	AI_score;
};

struct		s_play_list
{
  char		*data;
  t_play_list	*next;
};

int run(t_game *);
  
#endif /* !GAME_H_ */
