# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judumay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 21:23:06 by judumay           #+#    #+#              #
#    Updated: 2018/07/17 12:03:15 by judumay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = ft_putruc.c ft_atoi.c main.c calculs.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean :
	@rm -f $(NAME)

re: clean all

nor:
	@norminette -R CheckForbiddenSourceHeader *
