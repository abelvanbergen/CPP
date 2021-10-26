# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/06 11:29:04 by abelfrancis   #+#    #+#                  #
#    Updated: 2021/02/06 12:39:10 by abelfrancis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJECTS = main.o Brain.o Human.o
INCLUDES = Brain.hpp Human.hpp

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