/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:43:32 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/23 16:20:11 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int *)malloc(j * sizeof(int));
	if (tab == NULL)
		return (-1);
	*range = tab;
	while (i < j)
	{
		tab[i] = min + i;
		i++;
	}
	return (j);
}
/*#include <stdio.h>
int main()
{
	int **range = malloc(sizeof(int) * 10);
	int min = 2;
	int max = 5;
	printf("%d\n", ft_ultimate_range(range, min, max));
}*/
