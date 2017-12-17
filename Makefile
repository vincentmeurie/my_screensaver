##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Make my_screensaver
##

NAME	=	my_screensaver

CC	=	gcc
RM	=	rm -f

INC_DIR	=	include

CFlAGS	=	-I include/ -W -Wall -Wextra -Werror
CFLAGS	+=	-I$(INC_DIR)

LDFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

SRC	=	main_test.c	\
		my_put_pixel.c	\
		my_draw_lines.c	\
		init_igraph.c	\
		anims.c		\
		animsbis.c	\
		help.c		\
		anim_main.c	\
		lib.c

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJ) *~

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
