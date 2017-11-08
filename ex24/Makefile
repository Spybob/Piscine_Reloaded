# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:08:49 by prosnobl          #+#    #+#              #
#    Updated: 2017/11/07 18:03:44 by prosnobl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean

NAME = libft.a
HEADERS_DIRECTORY = includes/
SOURCE_DIRECTORY = srcs/ft_putchar.c \
				   srcs/ft_putstr.c \
				   srcs/ft_strcmp.c \
				   srcs/ft_strlen.c \
				   srcs/ft_swap.c

all : $(NAME)

$(NAME) :
	gcc -c -Wall -Wextra -Werror $(SOURCE_DIRECTORY)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean :
	/bin/rm -rf *.o

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all
