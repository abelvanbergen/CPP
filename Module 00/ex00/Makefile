# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/12 21:00:09 by abelfrancis   #+#    #+#                  #
#    Updated: 2020/10/13 11:08:32 by avan-ber      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = 	megaphone.cpp

all:$(NAME)

$(NAME):$(SRCS)
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
