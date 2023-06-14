/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:55:39 by athiebau          #+#    #+#             */
/*   Updated: 2023/03/01 23:30:33 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	tri;

	i = 0;
	tri = 1;
	while ((i < length - 1) && tri == 1)
	{
		if (f(tab[i], tab [i + 1]) < 0)
			tri = 0;
		i++;
	}
	if (tri != 1)
	{
		tri = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}		
	}
	return (1);
}

/*#include <stdio.h>

int        ft_tri(int a, int b)
{
    return (a - b);
}

int        main(void)
{
    static int	tab[] = {1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 7};
    int	length;

    length = 10;

    printf("%d\n", ft_is_sort(tab, length, &ft_tri));

}*/
