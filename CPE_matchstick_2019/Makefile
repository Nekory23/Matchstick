##
## EPITECH PROJECT, 2020
## matchstick
## File description:
## makefile
##

NAME	=	matchstick

SRC	=	src/main.c		\
		src/matchstick.c	\
		src/fill_first_board.c	\
		src/display_board.c	\
		src/ai.c		\
		src/player.c		\
		src/legal_move.c	\
		src/check_buffer.c	\
		src/remove_matches.c	\
		src/display_turns.c	\
		src/win_check.c		\
		src/error_handling.c	\
		src/my_atoi.c		\
		src/my_strlen.c		\
		src/my_putchar.c	\
		src/my_put_nbr.c	\
		src/my_putstr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall

CPPFLAGS=	-I./include/

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
