/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:31:30 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/23 21:27:20 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *str, size_t n)
{
	char			*s;

	s = str;
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char s[] = "......";
	printf("%s\n", s);
	ft_bzero(s, 3);
	bzero(s, 3);
	printf("%s\n", s);
}*/
