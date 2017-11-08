# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:07:55 by prosnobl          #+#    #+#              #
#    Updated: 2017/11/07 15:19:44 by prosnobl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean

NAME = ft_display_file
SRC = ft_display_file.c

all : $(NAME)
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_display_file.c

clean : 
	/bin/rm -rf *.o

fclean : clean
	/bin/rm -rf $(NAME)
