# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-ber <avan-ber@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/05/12 09:53:43 by avan-ber      #+#    #+#                  #
#    Updated: 2021/05/12 09:56:25 by avan-ber      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = serialize

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = serialize.cpp

all:$(NAME)

$(NAME):$(SRCS)
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
