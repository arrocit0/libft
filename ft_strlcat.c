/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:33:42 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/24 15:13:48 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ABORT hola bort

#include <string.h>
#include "libft.h"

static size_t	ft_strllen(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (str[i] && i < size)
	   ++i;	
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	u;

	dest_len = ft_strllen(dest, size);
	src_len = ft_strlen(src);
	i = 0;
	u = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (dest[i] != 0)
		i++;
	while (src[u] != 0 && (u < size - dest_len - 1))
	{
		dest[i] = src[u];
		u++;
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*int	main(void)
{
	//dest\0 >= size
	char dest2[] = "................";
	char dest[] = "................";
	char src2[] = "aiaiaia";
	char src[] = "aiaiaia";
	
	printf("%lu\n", strlcat(dest2, src2, 5));
	printf("%s\n", dest2);
	printf("%s\n", src2);

	printf("%zu\n", ft_strlcat(dest, src, 5));

	printf("%s\n", dest);
	printf("%s\n", src);
}*/
