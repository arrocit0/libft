/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 04:02:21 by rocimart          #+#    #+#             */
/*   Updated: 2023/04/04 13:18:35 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sou;
	size_t	j;

	dest = (char *)dst;
	sou = (char *)src;
	j = 0;
	if (dest > sou)
		while(len--)
			dest[len] = sou[len];
	else
		while (j < len)
		{
			dest[j] = sou[j];
			j++;
		}
	return (dest);
}

/*int	main (void)
{
	char	dst[] = "..............";
	char	dst2[] = "..............";
	char	uf[] = "_______________";
	char	src[] = "aiaiaaa";
	char	src2[] = "aiaiaaa";
	size_t	len   = 4;

	printf("%s\n", memmove(dst2, src2, len));
	
	printf("%s\n", ft_memmove(dst, src, len));

}*/
