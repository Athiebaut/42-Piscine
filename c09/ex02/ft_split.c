/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athiebau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:03:59 by athiebau          #+#    #+#             */
/*   Updated: 2023/02/25 12:55:11 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_def_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_str(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_def_sep(str[i], sep) == 0)
			i++;
		if (str[i])
			count++;
		while (str[i] && ft_def_sep(str[i], sep) == 1)
			i++;
	}
	return (count + 1);
}

int	ft_strlen_sep(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && ft_def_sep(str[i], sep) == 0)
		i++;
	return (i);
}

char	*ft_word(char *str, char *sep)
{
	int			len_word;
	int			i;
	char		*word;

	i = 0;
	len_word = ft_strlen_sep(str, sep);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int			i;
	int			j;
	char		**strings;

	i = 0;
	j = (ft_count_str(str, charset) + 1);
	strings = (char **)malloc(sizeof(char *) * j);
	if (strings == NULL)
		return (0);
	while (*str)
	{
		while (*str && (ft_def_sep(*str, charset) == 1))
			str++;
		if (*str)
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && (ft_def_sep(*str, charset) == 0))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

/*int main(int argc, char **argv)
{
	int	i;
	char **split;
	(void) argc;
	split = ft_split(argv[1], argv[2]);

	i = 0;
	while (split[i])
	{
		printf("%s\n",split[i]);
		free(split[i]);
		i++;
	}
	free(split);
}*/
