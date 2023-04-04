/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:33:32 by rocimart          #+#    #+#             */
/*   Updated: 2023/04/04 03:49:12 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&s[i]);
	return (0);
}

/*int	main(void)
{
	const char str[] = "teste";
	//char	probandomiamorportiiiiiiiiiiiiiiiiii[] = "........";
	int c = '\0';

	printf("%p\n", str);
	printf("%p\n", ft_strchr(str, '\0'));
	printf("%p\n", strchr(str, '\0'));

	printf("%c", c);
	//write(1, &c, 50);
}*/
