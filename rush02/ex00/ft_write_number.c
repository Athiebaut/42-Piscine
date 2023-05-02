/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:02:05 by trysinsk          #+#    #+#             */
/*   Updated: 2023/02/26 20:48:16 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	extract_dictionary(int tab, char **str);

void	putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		write (1, &str[j], 1);
		j++;
	}
}

void	ft_compare_tab(unsigned int nbr, int tab, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (nbr == str[i])
			ft_putstr(str[i]);
		i++;
	}
}

void	ft_write_part(unsigned int nbr, int tab, char **str)
{
	int					i;
	unsigned int		nbrd;

	if (nbr >= 100)
	{
		ft_compare_tab(nbr / 100, tab, **str);
		write (1, " hundred", 8);
		if (nbr % 100 != 0)
			write (1, " ", 1);
	}
	if (nbr >= 10)
	{
		nbrd = nbr % 100;
		if (nbrd <= 19 && nbrd >= 1)
			ft_compare_tab(nbrd, tab, **str);
		else
		{
			ft_compare_tab(nbrd - (nbrd % 10), tab, **str);
			if (nbr % 10 != 0)
				write (1, " ", 1);
			ft_compare_tab(nbr % 10, tab, **str);
		}
	}
	else if (nbr >= 1 && nbr <= 9)
		ft_compare_tab(nbr % 10, tab, **str);
}

void	ft_write_number(unsigned int nbr)
{
	int		tab;
	char	**str;

	ft_extract_dictionary(tab, str);
	if (nbr >= 1000000000)
	{
		ft_write_part(nbr / 1000000000, tab, str);
		nbr = nbr % 1000000000;
		write (1, " billion", 8);
	}
	else if (nbr >= 1000000)
	{
		ft_write_part(nbr / 1000000);
		nbr = nbr % 1000000;
		write (1, " million", 8);
	}
	else if (nbr >= 1000)
	{
		ft_write_part(nbr / 1000);
		nbr = nbr % 1000;
		write (1, " thousand", 9);
	}
	else
		ft_write_part(nbr);
}
