##
## Makefile for  in /home/jeamme_t/Workplace/abstractVM_2016
## 
## Made by Tom Jeammet
## Login   <tom.jeammet@epitech.eu>
## 
## Started on  Thu Jul 20 10:57:33 2017 Tom Jeammet
## Last update Tue Sep 26 12:39:59 2017 ze
##

CPP	= g++ -I./inc -Wall -Wextra -Werror

NAME	= 301dannon

RM	= rm -f

SRC	 = $(foreach dir,$(shell find src -type d),$(wildcard $(dir)/*.cpp))
#SRC     =	src/exception.cpp\
		src/print.cpp\
		src/issorted.cpp\
		src/selection_sort.cpp\
		src/insertion_sort.cpp\
		src/bubble_sort.cpp\
		src/quick_sort.cpp\
		src/merge_sort.cpp\
		src/main.cpp

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
