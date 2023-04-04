/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:01:28 by rocimart          #+#    #+#             */
/*   Updated: 2023/04/04 03:25:42 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

//ponlo bonito anda que el bucle está un poco redundante

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char			*h;
	char			*n;
	unsigned int	i;
	unsigned int	u;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	u = 0;
	if (len > ft_strlen(h))
		len = ft_strlen(h);
	if (n[u] == 0)
		return (h);
	while (i < len && h[i])
	{
		while (h[i] == n[u] && i < len)
		{
			i++;
			u++;
			if (n[u] == 0)
				return (&h[i - u]);
		}
		i -= u;
		u = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	s[] = "lorem ipsum dolor sit amet";
	const char	o[] = "ipsumm";
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	printf("%s\n", strnstr(s, o, 30));
	printf("%s\n", ft_strnstr(s, o, 30));
	printf("%s\n", ft_strnstr(haystack, needle, -1));
	printf("%s\n", strnstr(haystack, needle, -1));

}*/
