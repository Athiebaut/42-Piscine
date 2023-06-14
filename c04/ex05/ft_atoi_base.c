/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:56:55 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/21 13:53:50 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	int	taille;
	int	k;

	i = 0;
	taille = ft_strlen(str);
	if (taille < 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '\0' || taille == 1)
			return (0);
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		k = i + 1;
		while (k < taille)
		{
			if (str[i] == str[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

int	ft_verif(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	if (ft_check(base) == 1)
	{
		while (str[i] && (str[i] == '\t' || str[i] == '\f' || str[i] == '\n'
				|| str[i] == '\r' || str[i] == '\v' || str[i] == ' '))
			i++;
		while (str[i] && (str[i] == '+' || str[i] == '-'))
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (str[i] && (ft_verif(str[i], base) >= 0))
		{
			result = result * ft_strlen(base) + ft_verif(str[i], base);
			i++;
		}
	}
	return (sign * result);
}
