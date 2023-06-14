/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_dictionary.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trysinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:52:01 by trysinsk          #+#    #+#             */
/*   Updated: 2023/02/26 14:36:27 by trysinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_stock_tab(int tab)
{
	int	i;

	i = 0;
	while (i <= 20)
	{
		tab[i] = i;
		i++;
	}
	tab[21] = 30;
	tab[22] = 40;
	tab[23] = 50;
	tab[24] = 60;
	tab[25] = 70;
	tab[26] = 80;
	tab[27] = 90;
}

void	ft_stock_str_2(char **str)
{
	str[21] = "thrity";
	str[22] = "fourty";
	str[23] = "fifty";
	str[24] = "sixty";
	str[25] = "seventy";
	str[26] = "eigthy";
	str[27] = "ninety";
}

void	ft_stock_str(char **str)
{
	str[0] = "zero";
	str[1] = "one";
	str[2] = "two";
	str[3] = "three";
	str[4] = "four";
	str[5] = "five";
	str[6] = "six";
	str[7] = "seven";
	str[8] = "eight";
	str[9] = "nine";
	str[10] = "ten";
	str[11] = "eleven";
	str[12] = "twelve";
	str[13] = "thirteen";
	str[14] = "fourteen";
	str[15] = "fifteen";
	str[16] = "sixteen";
	str[17] = "seventeen";
	str[18] = "eigtheen";
	str[19] = "nineteen";
	str[20] = "twenty";
	ft_stock_str_2(str);
}

void	ft_extract_dictionary(int tab, char **str)
{
	ft_stock_tab(tab);
	ft_stock_str(str);
}
