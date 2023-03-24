/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:18:43 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/14 20:05:54 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char s11[] = "aiaiai";
	const char s1[] = "aiaiai";
	const char s22[] = "aiagai";
	const char s2[] = "aiagai";
	unsigned int n = 4;
	printf("%d\n", memcmp(s11, s22, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
}*/
