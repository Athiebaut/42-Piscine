/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:33:25 by trysinsk          #+#    #+#             */
/*   Updated: 2023/02/26 20:49:35 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void			ft_write_number(unsigned int nbr);
unsigned int	ft_atoi(char *str);

void	ft_error(int i)
{
	if (i == 0)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}
	if (i == 1)
	{
		write(1, "Dict Error", 10);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	unsigned int	nbr;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr < 0 || nbr > 4294967295)
			ft_error(0);
		else
		{
			if (nbr == 0)
				write(1, "zero", 4);
			else
				ft_write_number(nbr);
		}
	}
	else if (argc == 3)
	{
		nbr = ft_atoi(argv[2]);
		if (nbr < 0 || nbr > 4294967295)
			ft_error(0);
		else
		{
			if (nbr == 0)
				write (1, "zero", 4);
			else
				ft_write_number(nbr);
		}
	}
	else
		ft_error(0);
	return (0);
}
