# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/09 16:12:07 by abelfrancis   #+#    #+#                  #
#    Updated: 2021/02/11 13:27:51 by abelfrancis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = sed

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJECTS = replace.cpp

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
