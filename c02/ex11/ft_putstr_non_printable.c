/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:42:55 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/15 10:53:02 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hexa;
	unsigned char	c;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (ft_char_is_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			c = str[i];
			ft_putchar('\\');
			ft_putchar(hexa[c / 16]);
			ft_putchar(hexa[c % 16]);
		}
		i++;
	}
}

int main()
{
	ft_putstr_non_printable("€");
}
