/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:33:32 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/17 20:20:41 by rocimart         ###   ########.fr       */
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
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[ft_strlen(s)]);
	return (0);
}

/*int	main(void)
{
	const char str[] = " consentrao";
//	char	probandomiamorportiiiiiiiiiiiiiiiiii[] = "........";
	//int c = 't' + 256;

	printf("%s\n", ft_strchr(str, ' '));
	printf("%s\n", strchr(str, ' '));


	//write(1, &c, 50);
}*/
