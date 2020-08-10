##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	src/menu.c	\
		src/destroy.c	\
		src/display.c	\
		src/positions.c	\
		src/tools.c	\
		src/init.c	\
		src/mouse.c	\
		src/main.c

NAME	=	my_rpg

OBJ	=	$(SRC:.c=.o)

ifdef DEBUG
CFLAGS	=	-g -ggdb
endif

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-audio -lcsfml-window -I include/

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f src/*~
	rm -f include/*~

fclean:	clean
	rm -f $(NAME)

re:	fclean all
