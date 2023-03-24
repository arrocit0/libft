/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:39:57 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/23 21:07:33 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sou;
	size_t	i;

	dest = (char *)dst;
	sou = (char *)src;
	i = 0;
	if (len == 0)
		return (dest);
	//if (len > (ft_strlen() + 1)
	while ((i < len || (len == strlen(dest) - 1)))
	{
		dest[i] = sou[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dst[] = "pichi";
	char	eieie[] = ".................";
	char	dst2[] = "pichi";
	char	nanai[] ="...................";
	char	src[] = "micasa";

	printf("%lu\n", strlen(dst));
	printf("%s\n", memmove(dst2, src, 2));
	printf("%s\n", ft_memmove(dst, src, 2));
}*/
