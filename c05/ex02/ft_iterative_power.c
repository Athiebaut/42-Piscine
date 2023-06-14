/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:35:05 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/15 20:50:31 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
