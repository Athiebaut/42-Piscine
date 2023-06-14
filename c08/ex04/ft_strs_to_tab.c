/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:43:41 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/25 20:55:09 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		taille;
	char	*dest;

	i = 0;
	taille = ft_strlen(str);
	dest = (char *)malloc(taille * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (tab == 0)
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
/*#include <stdio.h>
int    main(int argc, char **argv)
{
    int                    index;
    struct s_stock_str    *structs;

    structs = ft_strs_to_tab(argc, argv);
    index = 0;
    while (index < argc)
    {
        printf("%d\n", index);
        printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
        printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
        printf("\t|     size : %d\n", structs[index].size);
        index++;
    }
}*/
