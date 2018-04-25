##
## Makefile for Makefile in /home/marvyne/repertoire_rendu/C/battle_for_midgard/tokpah_m/src
## 
## Made by TOKPAHOLOU Marvyne
## Login   <tokpah_m@etna-alternance.net>
## 
## Started on  Mon Dec  5 16:28:47 2016 TOKPAHOLOU Marvyne
## Last update Tue Dec  6 16:39:07 2016 TOKPAHOLOU Marvyne
##

CC	=	gcc -g

NAME	=	sta

SRC	=	src/main.c		\
		src/my_putmsg.c		\
		src/init_bag.c		\
		src/my_string2.c	\
		src/readline.c		\
		src/getCreature.c	\
		src/monster.c		\
		src/my_command.c	\
		src/my_command2.c	\
		src/magic_catch.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

LDFLAGS =	-L. -lmy

RM	=	rm -f

$(NAME):	$(OBJ)
		$(CC) -g $(OBJ) -o $(NAME) $(LDFLAGS)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

