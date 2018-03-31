# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 20:42:38 by rmdaba            #+#    #+#              #
#    Updated: 2018/03/26 20:42:38 by rmdaba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = srcs/ft.c srcs/ft_atoi.c srcs/main.c srcs/operator.c

HEADER = includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRCS) -I $(HEADER)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
