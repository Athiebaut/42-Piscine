/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:07:51 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/17 10:39:14 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar (i % 10 + '0');
}
