# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/06 11:16:49 by abelfrancis   #+#    #+#                  #
#    Updated: 2021/02/06 11:19:12 by abelfrancis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex04

CC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) ex04.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re