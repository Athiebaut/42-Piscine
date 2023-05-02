# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athiebau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 21:00:46 by athiebau          #+#    #+#              #
#    Updated: 2023/02/25 23:13:47 by athiebau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_putstr.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
INCS = includes
LIBC = ar -rc
LIBR = ranlib
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

.c.o: 
	${CC} ${CFLAGS} -I ${INCS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
