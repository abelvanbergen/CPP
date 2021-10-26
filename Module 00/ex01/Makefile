# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-ber <avan-ber@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/13 11:05:11 by avan-ber      #+#    #+#                  #
#    Updated: 2020/10/13 11:08:25 by avan-ber      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = 	phonebook.cpp Contact.class.cpp

all:$(NAME)

$(NAME):$(SRCS)
	$(CC) $(C++FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
