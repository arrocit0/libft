/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:48:24 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/13 13:43:08 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		a;

	a = 0;
	i = 0;
	n = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= (-1);
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return (n * a);
}

/*int	main(void)
{
	char	str[] = " r  +67t";

	char	s[] = "   r  +67t";

	printf("%d\n", atoi(str));

	printf("%d\n", ft_atoi(s));
}*/
