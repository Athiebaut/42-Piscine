/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:10:38 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/27 18:28:15 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*int main()
{
	int tab[11] = {2,5,7,9,3,1,44,6,8,5,6};
	ft_foreach(tab, 10, &ft_putnbr);
	return 0;
}*/
