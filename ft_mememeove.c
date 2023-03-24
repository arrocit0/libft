/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mememeove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:44:18 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/14 21:13:29 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*void	*memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sou;
	size_t	i;

	dest = (char *)dst;
	sou = (char *)src;
	
	while (i < len)
	{
		dest[i] = sou[i]
		i++;
	}


}*/

int	main(void)
{
	char	src[] = "nnnnn";
	char	dst[] = "oooo";
	char	relleno[] = "_________________";


	printf("%s\n", memmove(dst, src, 5));
	printf("%lu\n", strlen(memmove(dst, src, 5)));
//	printf("%s\n", ft_memmove());


}
