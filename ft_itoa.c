/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <bferdjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:01:26 by bferdjan          #+#    #+#             */
/*   Updated: 2024/11/24 16:58:23 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	len(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	long	nbr;
	int		i;

	nbr = n;
	i = len(nbr);
	tab = malloc(sizeof(char) * len(nbr) + 1);
	if (!tab)
		return (NULL);
	tab[i] = '\0';
	i--;
	if (nbr < 0)
	{
		tab[0] = '-';
		nbr *= -1;
	}	
	if (nbr == 0)
		tab[0] = '0';
	while (nbr > 0)
	{
		tab[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (tab);
}
