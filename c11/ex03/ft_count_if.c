/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:51:05 by athiebau          #+#    #+#             */
/*   Updated: 2023/03/01 20:48:24 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*int	ft(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == 'A')
			return (1);
		i++;
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    char **array;
    array = malloc(5 * sizeof(char *));
    if (!array)
	    return 0;
    array[0] = "A";
    array[1] = "B";
    array[2] = "OuiA";
    array[3] = "C";
    array[4] = "D";
    printf("%d\n", ft_count_if(array, 5, ft));
    free(array);
}*/
