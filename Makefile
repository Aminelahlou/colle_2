# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/01 16:51:18 by atoulous          #+#    #+#              #
#    Updated: 2015/11/01 22:36:06 by alahlou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colle-2

SRC = *.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
