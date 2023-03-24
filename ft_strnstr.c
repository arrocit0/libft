/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:01:28 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/15 12:56:58 by rocimart         ###   ########.fr       */
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
	if (n[u] == 0)
		return (h);
	while (i < len)
	{
		while (h[i] == n[u] && i < len)
		{
			i++;
			u++;
			if (n[u] == 0)
				return (&h[i - u]);
			if (n[u] != h[i])
				return (0);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	s[] = "lorem ipsum dolor sit amet";
	const char	o[] = "dolor";


	printf("%s\n", strnstr(s, o, -1));
	printf("%s\n", ft_strnstr(s, o, -1));

}*/
