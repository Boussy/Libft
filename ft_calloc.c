/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <bferdjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:44:47 by bferdjan          #+#    #+#             */
/*   Updated: 2024/12/17 12:06:18 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	nmemb_size;
	size_t	i;

	nmemb_size = nmemb * size;
	i = 0;
	ptr = malloc(nmemb_size);
	if (!ptr)
		return (NULL);
	while (i < nmemb_size)
		ptr[i++] = 0;
	return (ptr);
}
/*
bzero avec un malloc, alloue et assigne 0 a chaque octet du bloc memoire
*/
