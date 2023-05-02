/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:46:21 by athiebau          #+#    #+#             */
/*   Updated: 2023/03/01 21:21:47 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
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

int main (void)
{
    char **array;
    array = malloc(5 * sizeof(char *));
    array[0] = "asd,.mbn.kfAjb.s";
    array[1] = "Tds,dbf,djhfgj,";
    array[2] = NULL;
    array[3] = "ouisadasd";
    array[4] = "7824254";
    printf("%d\n", ft_any(array, ft));
}*/
