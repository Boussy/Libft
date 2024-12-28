/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:49:06 by bferdjan          #+#    #+#             */
/*   Updated: 2024/11/21 13:39:06 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}

/*#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char src[] = "Bonjour, ceci est un test.";
    char dest[50]; // Déclaration d'un tableau pour la destination

    printf("Avant memcpy: \"%s\"\n", dest);
    ft_memcpy(dest, src, 25); // Copier 25 octets de src vers dest
    printf("Après memcpy: \"%s\"\n", dest);

    return 0;
}
*/
