# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-ber <avan-ber@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/27 09:17:21 by avan-ber      #+#    #+#                  #
#    Updated: 2021/04/27 09:17:47 by avan-ber      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Array

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp

all:$(NAME)

$(NAME):$(SRCS) Array.class.hpp
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
