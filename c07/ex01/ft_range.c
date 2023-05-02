/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:33:33 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/23 16:19:35 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*tab;

	i = 0;
	range = max - min;
	if (min >= max)
		return (0);
	tab = (int *)malloc(range * sizeof(int));
	if (tab == NULL)
		return (0);
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>
int main()
{
	int min = 1;
	int max = 5;
	printf("%d\n", *ft_range(min, max));
}*/
