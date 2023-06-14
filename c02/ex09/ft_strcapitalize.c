/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:50:44 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/21 15:24:04 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 0)
				str[i] = str[i] - 32;
			flag = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char *str = "";
	printf("%s\n", ft_strcapitalize(str));
	return 0;
}
