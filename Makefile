##
## Makefile for shifumi in /home/julien/devc/correction_shifumi
## 
## Made by BETTALE Julien
## Login   <bettal_j@etna-alternance.net>
## 
## Started on  Tue Apr  3 19:50:57 2018 BETTALE Julien
## Last update Tue Apr  3 21:45:26 2018 BETTALE Julien
##

CC	=	gcc

RM	=	rm -f

NAME	=	shifumi

SRC_DIR	=	src

SRC	=	$(SRC_DIR)/main.c \
		$(SRC_DIR)/arg.c \
		$(SRC_DIR)/game.c \
		$(SRC_DIR)/error.c \
		$(SRC_DIR)/list.c \
		$(SRC_DIR)/readline.c

OBJ	=	$(SRC:.c=.o)

INCLUDE	=	-I./include

LIB	=	-L./my_lib/ -lmy

CFLAGS	=	-W -Wall $(INCLUDE) $(LIB)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(LIB)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
