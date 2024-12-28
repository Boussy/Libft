/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <bferdjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:54:24 by bferdjan          #+#    #+#             */
/*   Updated: 2024/12/22 21:41:49 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (dest == NULL && src == NULL)
		return (0);
	if (s < d)
	{
		d += len;
		s += len;
		while (len-- > 0)
		{
			*(--d) = *(--s);
		}
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dest);
}
/*
Contrairement à memcpy, ft_memmove gère correctement les cas où les zones
de mémoire source et destination se chevauchent

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len);

int	main(void)
{
	char	str[50] = "Bonjour, ceci est un test.";

	printf("Avant memmove: \"%s\"\n", str);
	ft_memmove(str + 10, str, 25); // Déplacer "Bonjour, ceci est un test."
	printf("Après memmove: \"%s\"\n", str);
	// Affichera "Bonjour, Bonjour, ceci est un test."
	return (0);
}
*/
