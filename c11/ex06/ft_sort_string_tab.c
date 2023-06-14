/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:12:29 by athiebau          #+#    #+#             */
/*   Updated: 2023/03/01 23:30:18 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*int        main(void)
{
    int        index;
    char    **tab;

    tab = malloc(6 * sizeof(char *));
    tab[0] = strdup("8");
    tab[1] = strdup("3");
    tab[2] = strdup("b");
    tab[3] = strdup("2");
    tab[4] = strdup("x");
    tab[5] = strdup(" ");
    tab[6] = 0;
    index = 0;
    while (tab[index])
    {
        printf("tab[%d] = %s\n", index, tab[index]);
        index++;
    }
    ft_sort_string_tab(tab);
    printf("\n");
    index = 0;
    while (tab[index])
    {
        printf("tab[%d] = %s\n", index, tab[index]);
        index++;
    }
}*/
