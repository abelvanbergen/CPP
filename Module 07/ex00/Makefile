# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/15 16:52:40 by abelfrancis   #+#    #+#                  #
#    Updated: 2021/04/27 09:09:06 by avan-ber      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp

all:$(NAME)

$(NAME):$(SRCS) whatever.hpp
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
