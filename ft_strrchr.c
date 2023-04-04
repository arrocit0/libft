/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:59:09 by rocimart          #+#    #+#             */
/*   Updated: 2023/04/04 03:56:12 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;
	char	*s;

	s = (char *)str;
	len = ft_strlen(s);
	if ((char)c == '\0')
		return (&s[len]);
	while (len != 0)
	{
		//printf("|%c\n", s[len]);
		if (s[len - 1] == (char) c)
			return (&s[len - 1]);
		len--;
		if (s[0] == (char)c)
			return (s);
	}
	return (0);
}

/*int	main(void)
{
	const char str[] = "tripouille";

	int c = 't' + 256;

	//printf("%p\n", str);
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
}*/
