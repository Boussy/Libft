/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferdjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:28:05 by bferdjan          #+#    #+#             */
/*   Updated: 2024/11/21 13:40:47 by bferdjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find == NULL || str == NULL)
		if (n == 0)
			return ((char *)str);
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0' && str[i + j] == to_find[j]
				&& (i + j) < n)
				j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
    const char *haystack = "Bonjour, comment ça va ?";
    const char *needle = "comment";
    char *result;

    result = ft_strnstr(haystack, needle, 20);

    if (result != NULL)
        printf("La sous-chaîne '%s' trouvée à la position :
		%ld\n", needle, result - haystack);
    else
        printf("La sous-chaîne '%s' n'est pas trouvée dans les 20
		premiers caractères.\n", needle);

    return 0;
}*/
