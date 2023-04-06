# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekern <ekern@student.42lausanne.ch>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 15:29:23 by ekern             #+#    #+#              #
#    Updated: 2023/04/06 14:08:45 by ekern            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/sh

CFLAGS = -Werror -Wextra -Wall --std=c++98
CC     = c++ $(CFLAGS)

SRCS := $(shell find . -name '*.cpp')
OBJ := $(SRCS:%cpp=%o)

NAME   = megaphone

.cpp.o:
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re