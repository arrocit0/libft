/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mememove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:03:04 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/14 17:56:35 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
void	*fill_dest(char *p_dst, const char *p_src, unsigned int i, size_t len)
{
	while (i < len)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (p_dst);
}
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char				*p_dst;
	const char			*p_src;
	unsigned int		i;
	p_dst = dst;
	p_src = src;
	i = 0;
	if (p_dst == p_src)
		return (dst);
	if (p_dst < p_src)
	{
		return (fill_dest(p_dst, p_src, i, len));
	}
	else
	{
		i = len;
		while (i > 0)
		{
			p_dst[i - 1] = p_src[i - 1];
			i--;
		}
	}
	return (dst);
}

int	main(void)
{
	char	src[] = "pic";
	char	src2[] = "pic";
	char	dest[] = "micasa";
	char	f[] = "...................";
	char	dest2[] = "micasa";
	char	fi[] = "..................";

	printf("%s\n", memmove(src, dest, 4));
	
	printf("%s\n", ft_memmove(src2, dest2, 4));



}
