# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-ber <avan-ber@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/05/12 09:58:03 by avan-ber      #+#    #+#                  #
#    Updated: 2021/05/12 10:02:54 by avan-ber      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = identify

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp

all:$(NAME)

$(NAME):$(SRCS) Identify.class.hpp
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
