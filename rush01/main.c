/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:03:51 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/19 17:12:59 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	*argentry;

	tab[4][4] = {{0, 0, 0, 0,}, {0, 0, 0, 0,}, {0, 0, 0, 0,}, {0, 0, 0, 0,}};
	if (check(argc, argv) == 1)
	{
		return (0);
	}
	argentry = get_numbers(argv[1]);
	if (solve(tab, argentry, 0) == 1)
	{
		display_solution(tab);
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}
