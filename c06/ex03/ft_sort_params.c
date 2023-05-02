/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:32:49 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/18 19:18:43 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = 1;
	while (x < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		x++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
