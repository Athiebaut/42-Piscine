# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athiebau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 13:48:30 by athiebau          #+#    #+#              #
#    Updated: 2023/03/01 21:29:54 by athiebau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/do_op.c srcs/ft_addition.c srcs/ft_soustraction.c srcs/ft_division.c srcs/ft_multiplication.c srcs/ft_modulo.c srcs/ft_atoi.c srcs/ft_putnbr.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
CC	= gcc
FLAGS	= -Wall -Werror -Wextra
RM	= rm -f

all:
	${CC} ${FLAGS} ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
