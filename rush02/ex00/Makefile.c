/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaudril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:40:22 by abaudril          #+#    #+#             */
/*   Updated: 2023/02/25 09:40:30 by abaudril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	char	*str;

	while (nb > 9)
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10 + (str[i] - '0'));
	}
}

int	ft_error(int i)
{
	if (i == NULL)
		write(1, "Impossible de charger le dictionnaire\n", 38);
}
