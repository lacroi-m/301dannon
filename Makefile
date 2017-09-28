##
## Makefile for  in /home/jeamme_t/Workplace/abstractVM_2016
## 
## Made by Tom Jeammet
## Login   <tom.jeammet@epitech.eu>
## 
## Started on  Thu Jul 20 10:57:33 2017 Tom Jeammet
## Last update Thu Sep 28 17:58:35 2017 ze
##

CPP	= g++ -I./inc

NAME	= 301dannon

RM	= rm -f

SRC	 = $(foreach dir,$(shell find src -type d),$(wildcard $(dir)/*.cpp))

OBJ     = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CPP) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re

%.o: %.cpp
	$(CPP) -c $< -o $@ $(CFLAGS)

.PHONY: all clean fclean re
