##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC	=	gcc -l csfml-graphics -l csfml-audio -l csfml-system

SRC	=	my_hunter.c\
		rect.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
