# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judumay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 11:39:42 by judumay           #+#    #+#              #
#    Updated: 2018/07/21 16:19:00 by judumay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
NAME0 = colle-00
NAME1 = colle-01
NAME2 = colle-02
NAME3 = colle-03
NAME4 = colle-04
SRC = srcs/main.c srcs/ft_atoi.c srcs/ft_putruc.c
SRC0 = colle/main.c colle/rush00.c srcs/ft_atoi.c srcs/ft_putruc.c
SRC1 = colle/main.c colle/rush01.c srcs/ft_atoi.c srcs/ft_putruc.c
SRC2 = colle/main.c colle/rush02.c srcs/ft_atoi.c srcs/ft_putruc.c
SRC3 = colle/main.c colle/rush03.c srcs/ft_atoi.c srcs/ft_putruc.c
SRC4 = colle/main.c colle/rush04.c srcs/ft_atoi.c srcs/ft_putruc.c
HEADER = includes/

all: $(NAME)

$(NAME):
		@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)
		@gcc -Wall -Wextra -Werror -o $(NAME0) $(SRC0) -I $(HEADER)
		@gcc -Wall -Wextra -Werror -o $(NAME1) $(SRC1) -I $(HEADER)
		@gcc -Wall -Wextra -Werror -o $(NAME2) $(SRC2) -I $(HEADER)
		@gcc -Wall -Wextra -Werror -o $(NAME3) $(SRC3) -I $(HEADER)
		@gcc -Wall -Wextra -Werror -o $(NAME4) $(SRC4) -I $(HEADER)


0 : 
	@gcc -Wall -Wextra -Werror -o $(NAME0) $(SRC0) -I $(HEADER)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)

1 :
	@gcc -Wall -Wextra -Werror -o $(NAME1) $(SRC1) -I $(HEADER)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)

2 : 
	@gcc -Wall -Wextra -Werror -o $(NAME2) $(SRC2) -I $(HEADER)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)

3 :
	@gcc -Wall -Wextra -Werror -o $(NAME3) $(SRC3) -I $(HEADER)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)

4 :
	@gcc -Wall -Wextra -Werror -o $(NAME4) $(SRC4) -I $(HEADER)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)

fclean :
		@rm -f $(NAME) $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4)

re: fclean all

nor:
		@norminette
