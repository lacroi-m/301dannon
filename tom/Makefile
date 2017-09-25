##
## Makefile for  in /home/jeamme_t/Workplace/abstractVM_2016
## 
## Made by Tom Jeammet
## Login   <tom.jeammet@epitech.eu>
## 
## Started on  Thu Jul 20 10:57:33 2017 Tom Jeammet
## Last update Mon Sep 25 12:59:05 2017 Tom Jeammet
##

NAME            =       301dannon

CC              =       g++

RM              =       rm -f

INC		=	inc/

DIR		=	src/

SRC             =	$(addprefix $(DIR),     \
			main.cpp		\
			exception.cpp		\
			print.cpp		\
			selection_sort.cpp	\
			insertion_sort.cpp	\
			bubble_sort.cpp		\
			quick_sort.cpp		\
			merge_sort.cpp		\
			)

OBJ             =       $(SRC:.cpp=.o)

CFLAGS          =       -W -Wall -Wextra -Werror -I/$(INC)

##
all:            $(NAME)

$(NAME):        $(OBJ)
		$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:         clean
		$(RM) $(NAME)

re:             fclean all

rf:             all clean

.PHONY:         all re clean fclean
