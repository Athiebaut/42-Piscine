/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:30:50 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/08 19:40:08 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
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
			ft_write(' ');
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
