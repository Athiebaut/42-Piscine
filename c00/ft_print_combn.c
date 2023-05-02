/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:29:19 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/09 10:58:23 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
i	long	n;

	n = nb;
	if (nb < 0)
	{
		n = -nb;
		ft_write('-');
	}
	if (n >= 9)
	{
		ft_putnbr(n / 10);
	}
	ft_write(n % 10 + '0');
}

void	ft_print_combn(long nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write(i / 10 + '0');
			ft_write(i % 10 + '0');
			ft_write(j / 10 + '0');
			ft_write(j % 10 + '0');
			if (!(i == 98 && j == 99))
			{
				ft_write(',');
				ft_write(' ');
			}
			j++;
		}
		i++;
	}
}

int	the_last_nb(int n)
{
	
}
	
