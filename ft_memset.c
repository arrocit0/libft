/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:37:17 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/15 15:58:43 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strlen as arg3 -> char?
//si strlen no considera null por qué tengo que 
//tenerlo en cuenta y restarlo?  ----> niñaaaaa
//porque i = 0 (necesario para iterar)
#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*s;

	i = 0;
	s = str;
	if (len == 0)
		return (s);
	while (i <= len - 1)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char str[] = "aiaiaiaiai";
	char str2[] = "aiaiaiaiai";
	unsigned int c = 'p';
//	unsigned int n = 29;

	printf("%s\n", memset(str2, c, strlen(str2)));
	
	printf("%s\n", ft_memset(str, c, strlen(str)));

}*/
