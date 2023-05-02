/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:49:08 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/23 21:54:37 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	if (nbr <= 0)
		return (0);
	if (nbr == 1)
		return (1);
	i = 2;
	if (nbr >= 2)
	{
		while (i * i <= nbr)
		{
			if (i * i == nbr)
				return (i);
			i++;
		}
	}
	return (0);
}
#include <stdio.h>
int main()
{
	int i = 2147483647;
	printf("%d\n", ft_sqrt(i));
	return 0;
}
