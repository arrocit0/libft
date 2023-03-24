/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 00:29:26 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/16 13:32:37 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dest;
	char			*sou;
	unsigned int	i;

	dest = (char *)dst;
	sou = (char *)src;
	i = 0;
	if (dest == 0 && sou == 0)
		return (0);
	while (i < n)
	{
		dest[i] = sou[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	dst[] = "";
	char	aiai[] = ".............";
	//char	dst2[] = "";
	char	src[] = "aaaaaaa";
	char	mimi[] = ".............";
	//char	src2[] = "aaaaaaa";

	//printf("%s\n", memcpy(dst2, src2, 9));
	printf("%s\n", ft_memcpy(dst, src, 9));
}*/
