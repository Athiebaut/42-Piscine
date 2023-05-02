/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:57 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/12 20:13:13 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	tdest;
	unsigned int	tsrc;

	i = 0;
	tdest = ft_strlen(dest);
	tsrc = ft_strlen(src);
	j = tdest;
	if (size == 0 || size <= tdest)
		return (size + tsrc);
	while (src [i] != '\0' && i < size - tdest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (tdest + tsrc);
}
