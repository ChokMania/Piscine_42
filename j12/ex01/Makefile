# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judumay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 21:23:06 by judumay           #+#    #+#              #
#    Updated: 2018/07/19 13:23:27 by judumay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = ft_puttruc.c main.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean :
	@rm -f $(NAME)

re: clean all

nor:
	@norminette -R CheckForbiddenSourceHeader *
