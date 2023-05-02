/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:12:30 by athiebau          #+#    #+#             */
/*   Updated: 2023/03/01 21:23:57 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && cmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i ++;
	}
}

/*int        ft_strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int        main(void)
{
    int        index;
    char    **tab;

    tab = malloc(8 * sizeof(char *));
    tab[0] = strdup("piscine");
    tab[1] = strdup("luck");
    tab[2] = strdup("your");
    tab[3] = strdup("friend");
    tab[4] = strdup("in");
    tab[5] = strdup("good");
    tab[6] = strdup("Hello");
    tab[7] = 0;
    index = 0;
    while (tab[index])
    {
        printf("tab[%d] = %s\n", index, tab[index]);
        index++;
    }
    ft_advanced_sort_string_tab(tab, &ft_strcmp);
    printf("\n");
    index = 0;
    while (tab[index])
    {
        printf("tab[%d] = %s\n", index, tab[index]);
        index++;
    }
}*/
