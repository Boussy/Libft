/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:47:57 by bferdjan          #+#    #+#             */
/*   Updated: 2024/11/24 16:11:29 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	char	*src_casted;
	size_t	i;

	str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	src_casted = (char *)src;
	i = 0;
	while (src_casted[i] != '\0')
	{
		str[i] = src_casted[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
