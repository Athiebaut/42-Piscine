/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:29:56 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/09 21:38:03 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)
{
	ft_write(a);
	ft_write(b);
	ft_write(c);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		ft_write(',');
		ft_write(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		b = a + 1;
		a++;
	}
}
