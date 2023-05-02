/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:46:21 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/11 23:55:33 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
	printf("%d%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}

int main()
{
	int	tab[] = {1, 8, 5, 7, 2, 9};
	ft_rev_int_tab(tab, 6);
}
