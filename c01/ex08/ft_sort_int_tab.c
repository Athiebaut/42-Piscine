/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:11:38 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/10 14:43:09 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 1;
	if (size >= 2)
	{
		while (i < size)
		{
			if (tab[i] < tab[i - 1])
			{
				temp = tab[i];
				tab [i] = tab[i - 1];
				tab[i - 1] = temp;
				i = 1;
			}
			else
				i++;
		}
	}
}
