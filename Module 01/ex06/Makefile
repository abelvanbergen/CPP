# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/06 12:46:39 by abelfrancis   #+#    #+#                  #
#    Updated: 2021/02/06 12:49:21 by abelfrancis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex06

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJECTS = main.o HumanA.o HumanB.o Weapon.o
INCLUDES = HumanA.hpp HumanB.hpp Weapon.hpp

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