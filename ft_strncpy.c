/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:13:08 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/23 21:08:48 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i <= len && ft_strlen(dst) >= len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

/*int	main (void)
{
//	char	dst2[]= "..";
//	char	src2[] = "aaaaaaa";
	char	dst[]= "..";
	char	src[] = "aaaaaaa";
	int		len = 4;

	printf("%zu\n", ft_strlen(dst));
	//printf("%s\n", strncpy(dst2, src2, len));
	printf("%s\n", ft_strncpy(dst, src, len));
}*/
