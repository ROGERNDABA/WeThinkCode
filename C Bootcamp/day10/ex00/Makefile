# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 12:45:36 by rmdaba            #+#    #+#              #
#    Updated: 2018/03/26 12:45:37 by rmdaba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strrev.c srcs/ft_swap.c \
		srcs/ft_putchar.c srcs/ft_strlen.c

HEADER = includes/

FLAGS = -Wall -Wextra -Werror -c

OBJECT = ft_putstr.o ft_strcmp.o ft_strlen.o ft_strrev.o ft_swap.o ft_putchar.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all