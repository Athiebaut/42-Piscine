/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:13:31 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/14 16:32:59 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	if (argc < 2)
		return (0);
	while (j > 0)
	{
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		j--;
	}
}	
