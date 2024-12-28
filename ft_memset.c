/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <bferdjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:27:45 by bferdjan          #+#    #+#             */
/*   Updated: 2024/11/24 16:59:49 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (n-- > 0)
		*ptr++ = (unsigned char)c;
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    char str[50] = "Bonjour, ceci est un test.";
    
    printf("Avant memset: \"%s\"\n", str);
    ft_memset(str, '*', 10); // Remplir les 10 premiers octets avec '*'
    printf("Après memset: \"%s\"\n", str);

    return 0;
}
*/
