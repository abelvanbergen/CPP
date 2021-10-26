# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/02 10:50:18 by abelfrancis   #+#    #+#                  #
#    Updated: 2021/02/02 10:54:43 by abelfrancis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = ex01.cpp

all:$(NAME)

$(NAME):$(SRCS)
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re