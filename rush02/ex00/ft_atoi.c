/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:35:24 by trysinsk          #+#    #+#             */
/*   Updated: 2023/02/25 16:38:40 by trysinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	result;

	result = 0;
	i = 0;
	j = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str [i] <= 12))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		j++;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (j % 2 != 0)
		result = -result;
	return (result);
}
