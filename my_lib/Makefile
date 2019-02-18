
CC =    gcc
NAME =  libmy.a
SRC =   my_getnbr.c \
        my_isneg.c \
        my_put_nbr.c \
        my_putchar.c \
        my_putstr.c \
        my_strcat.c \
        my_strcmp.c \
        my_strcpy.c \
        my_strlen.c \
        my_strncat.c \
        my_strncmp.c \
        my_strncpy.c \
        my_swap.c \
	my_strstr.c \
        my_strdup.c \
        my_str_to_wordtab.c

OBJ =   $(SRC:%.c=%.o)
RM =    rm -f
CFLAGS = -W -Werror -Wall

$(NAME):	$(OBJ)
		$(AR) rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:	
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

.PHONY:	clean

re:	fclean all
