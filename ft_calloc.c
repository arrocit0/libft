/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:31:29 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/16 14:08:08 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t		len;
	void		*c;

	len = count * size;
	c = malloc(len);
	if (c == NULL)
		return (NULL);
	ft_bzero(c, len);
	return (c);
}

/*int	main(void)
{
	


	printf("%p\n", );
}*/
