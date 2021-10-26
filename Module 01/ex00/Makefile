# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/20 14:24:53 by abelfrancis   #+#    #+#                  #
#    Updated: 2021/01/20 14:42:47 by abelfrancis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = pony

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = Pony.cpp main.cpp

all:$(NAME)

$(NAME):$(SRCS)
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re