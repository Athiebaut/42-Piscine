/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:37:19 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/23 20:07:57 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	ft_verif(char c, char *base);

int	ft_check(char *str)
{
	int	i;
	int	taille;
	int	k;

	i = 0;
	taille = ft_strlen(str);
	if (taille < 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '\0' || taille == 1)
			return (0);
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		k = i + 1;
		while (k < taille)
		{
			if (str[i] == str[k])
				return (0);
			k++;
		}
		i++;
	}
	return (i);
}

int	ft_lenght(int nbr, int lenbase)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr = nbr / lenbase;
		i++;
	}
	return (i + 1);
}

void	ft_convert(int nbr, char *str, char *base_to)
{
	int	j;
	int	i;

	i = ft_check(base_to);
	j = ft_lenght(nbr, i);
	str[--j] = '\0';
	if (nbr == 0)
	{
		str[0] = base_to[0];
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--j] = base_to[nbr % i];
		nbr = nbr / i;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	if (ft_check(base) > 0)
	{
		while (str[i] && (str[i] == '\t' || str[i] == '\f' || str[i] == '\n'
				|| str[i] == '\r' || str[i] == '\v' || str[i] == ' '))
			i++;
		while (str[i] && (str[i] == '+' || str[i] == '-'))
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (str[i] && (ft_verif(str[i], base) >= 0))
		{
			result = result * ft_strlen(base) + ft_verif(str[i], base);
			i++;
		}
	}
	return (sign * result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			medium;
	int			len_f;
	char		*finalbase;

	if (ft_check(base_from) == 0 || ft_check(base_to) == 0)
		return (0);
	medium = ft_atoi_base(nbr, base_from);
	len_f = ft_lenght(medium, ft_strlen(base_to));
	finalbase = (char *)malloc(len_f * sizeof(char));
	if (finalbase == NULL)
		return (0);
	ft_convert(medium, finalbase, base_to);
	finalbase[len_f] = '\0';
	return (finalbase);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
}*/
