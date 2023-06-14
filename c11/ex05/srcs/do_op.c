/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:06:32 by athiebau          #+#    #+#             */
/*   Updated: 2023/03/01 21:40:35 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	operation(int a, char *c, int b)
{
	int		(*operation[5])(int, int);
	long	res;

	res = -1;
	operation[0] = &ft_addition;
	operation[1] = &ft_division;
	operation[2] = &ft_modulo;
	operation[3] = &ft_multiplication;
	operation[4] = &ft_soustraction;
	if (c[0] == '+')
		res = operation[0](a, b);
	else if (c[0] == '/')
		res = operation[1](a, b);
	else if (c[0] == '%')
		res = operation[2](a, b);
	else if (c[0] == '*')
		res = operation[3](a, b);
	else if (c[0] == '-')
		res = operation[4](a, b);
	return (res);
}

void	do_op(char *nb1, char *c, char *nb2)
{
	int		a;
	int		b;
	long	res;

	a = ft_atoi(nb1);
	b = ft_atoi(nb2);
	res = -1;
	if (ft_strlen(c) > 1)
		write(1, "0", 1);
	else if (c[0] != '/' && c[0] != '*' && c[0] != '-'
		&& c[0] != '+' && c[0] != '%')
		write(1, "0", 1);
	else if (c[0] == '/' && b == 0)
		write(1, "Stop : division by zero", 23);
	else if (c[0] == '%' && b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		res = operation(a, c, b);
		ft_putnbr(res);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}
