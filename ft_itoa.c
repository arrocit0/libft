/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:49:59 by rocimart          #+#    #+#             */
/*   Updated: 2023/04/01 00:09:01 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	n_len(int n)
{
	size_t i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while  (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	int		u;
	char	*m;
	size_t	i;

	u = 0;
	i = 0;
	if(n == 0)
		return(strdup("0"));
	if(n == -2147483648)
		return(strdup("-2147483648"));
	len = n_len(n);
//	printf("pos0: %zu\n", len);
	m = malloc(len + 1);
	if (m == NULL)
		return (NULL);
	m[n_len(n)] = '\0';
	if (n < 0)
	{
		m[0] = '-';
		n *= -1;
	}
	while (n > 0 && len--)
	{
		u = n % 10;
		m[len] = u + '0';
//		printf("[]->%zu\t%c\n", len, m[len]);
		u = 0;
		n = n / 10;
	}
//	printf("pos: %zu\n", len);
//	printf("_____________\n");
	
/*	while (m[i])
	{
		printf("i->%zu\t%c\n", i, m[i]);
		i++;
	}
	printf("i->%zu\t%c\n", i, m[i]);*/
	return(m);
}

/*int	main(void)
{
	printf("||||%s||||\n", ft_itoa(-2147483648));

}*/
