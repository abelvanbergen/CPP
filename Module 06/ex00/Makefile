# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-ber <avan-ber@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/05/12 10:04:06 by avan-ber      #+#    #+#                  #
#    Updated: 2021/05/12 10:51:54 by avan-ber      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = checkers.cpp makePrintableFormat.cpp printers.cpp Scalarconversion.cpp

all:$(NAME)

$(NAME):$(SRCS) Scalarconversion.hpp
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
