/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <bferdjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:00:17 by bferdjan          #+#    #+#             */
/*   Updated: 2024/12/22 21:47:55 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_free(char **dest, int j)
{
	while (j > 0)
		free(dest[--j]);
	free(dest);
	return (NULL);
}

int	ft_count_word(char *str, char charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		while (str[i] && (str[i] == charset))
			i++;
		if (str[i] && (str[i] != charset))
		{
			while ((str[i] != charset) && str[i])
				i++;
			word++;
		}
	}
	return (word);
}

char	**ft_malloc_word(char *str, char charset, char **dest, int word)
{
	int	i;
	int	letter;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		letter = 0;
		while (str[i] && (str[i] == charset))
			i++;
		while (str[i] && (str[i] != charset))
		{
			letter++;
			i++;
		}
		if (j < word)
		{
			dest[j] = malloc(sizeof(char) * (letter + 1));
			if (!dest[j])
				return (ft_free(dest, j));
			j++;
		}
	}
	return (dest);
}

char	**ft_put_word(char *str, char charset, char **dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] && (str[i] == charset))
			i++;
		if (str[i] && (str[i] != charset))
		{
			while (str[i] && (str[i] != charset))
				dest[k][j++] = str[i++];
			dest[k][j] = '\0';
			k++;
		}
	}
	return (dest);
}

char	**ft_split(const char *str, char charset)
{
	char	**dest;
	int		word;
	char	*cast_str;

	cast_str = (char *)str;
	word = ft_count_word(cast_str, charset);
	dest = malloc(sizeof(char *) * (word + 1));
	if (!dest)
		return (NULL);
	dest = ft_malloc_word(cast_str, charset, dest, word);
	if (!dest)
		return (NULL);
	dest = ft_put_word(cast_str, charset, dest);
	dest[word] = NULL;
	return (dest);
}

// int	main(void)
//{
//	int		i;
//	char	**tab;
//
//	i = 0;
//	tab = ft_split("hello!", 32);
//	while (tab[i])
//	{
//		printf("%s\n", tab[i]);
//		i++;
//	}
//	printf("%d\n", i);
//	return (0);
//}
