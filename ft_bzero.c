/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:43:44 by bferdjan          #+#    #+#             */
/*   Updated: 2024/11/21 12:47:51 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = 0;
}
/*
#include <stdio.h>

void ft_bzero(void *s, size_t n);

int main(void)
{
    char str[50] = "Bonjour, ceci est un test.";
    
    printf("Avant bzero: \"%s\"\n", str);
    ft_bzero(str, 10); // Remplir les 10 premiers octets avec des zéros
    printf("Après bzero: \"%s\"\n", str);

    return 0;
}*/
