/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:49:56 by athiebau          #+#    #+#             */
/*   Updated: 2023/03/02 14:57:31 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_full_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		len = len + ft_strlen(sep);
		i++;
	}
	len = len - ft_strlen(sep) + 1;
	return (len);
}

int	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			index;
	int			i;
	int			len;
	char		*str_join;

	i = 0;
	len = ft_full_len(size, strs, sep);
	index = 0;
	if (size < 1)
	{
		str_join = (char *)malloc(sizeof(char));
		*str_join = 0;
		return (str_join);
	}
	str_join = (char *)malloc((len + 1) * sizeof(char));
	if (!str_join)
		return (NULL);
	while (index < size)
	{
		i += ft_strcpy(str_join + i, strs[index]);
		if (index < size - 1)
			i += ft_strcpy(str_join + i, sep);
		index++;
	}
	return (str_join);
}

#include <stdio.h>
int main(void)
{
	char *str[3] = { "salut", "les", "amis" };
	char *sep = "-o-";
	char *dest;

	dest = ft_strjoin(0, str, sep);
	printf("str is %s\n", dest);
	free(dest);
}
