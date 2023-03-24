/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzer0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:25:00 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/23 21:26:44 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	char			*s;

	i = 0;
	s = str;
	while (i <= n - 1 && n != 0)
	{
		s[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char s[] = "......";
	printf("%s\n", s);
	ft_bzero(s, 3);
	bzero(s, 3);
	printf("%s\n", s);
}*/
