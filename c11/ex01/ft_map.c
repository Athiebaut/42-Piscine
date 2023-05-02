/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:26:48 by athiebau          #+#    #+#             */
/*   Updated: 2023/03/01 21:21:01 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*int	mult(int i)
{
	int	j;
	j = 0;
	j = i * 2;
	return j;
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*rendu;

	i = 0;
	rendu = (int *)malloc(sizeof(int) * length);
	if (rendu == NULL)
		return (0);
	while (i < length)
	{
		rendu[i] = (*f)(tab[i]);
		i++;
	}
	return (rendu);
}

/*#include <stdio.h>
 
int main (void)
{
    int    i = 0;
    int *tab;
    int length = 10;
    int *res;

    tab = malloc(length * sizeof(int));
    while (i < length)
    {
        tab[i] = i;
        i++;
    }
    res = ft_map(tab, length, &mult);
    i = 0;
    while (i < length)
    {
        printf( "%i", res[i]);
	printf(",");
        i++;
    }
}*/
