/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:42:47 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/17 10:42:23 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(str);
	if (j < 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '\0' || j <= 1)
			return (0);
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		k = i + 1;
		while (k < j)
		{
			if (str[i] == str[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				error;
	unsigned int	taille;
	unsigned int	nb;

	error = ft_check(base);
	taille = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nbr;
		}
		if (nb < taille)
			ft_putchar(base[nb]);
		if (nb >= taille)
		{
			ft_putnbr_base(nb / taille, base);
			ft_putnbr_base(nb % taille, base);
		}
	}
}
