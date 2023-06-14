/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:05:01 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/21 21:59:46 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}
#include <stdio.h> 
int main()
{
	printf("%d\n", ft_is_prime(9));
}
