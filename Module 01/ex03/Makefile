# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/06 11:07:53 by abelfrancis   #+#    #+#                  #
#    Updated: 2021/02/06 11:10:09 by abelfrancis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = Clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

OBJECTS = main.o Zombie.o ZombieHorde.o
INCLUDES = Zombie.hpp ZombieEvent.hpp

all: $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -I ./ -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re