/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:59:09 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/23 21:09:23 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*s;

	s = (char *)str;
	len = strlen(s);
	if (c == '\0')
		return (&s[len]);
	while (len != 0)
	{
		if (s[len] == c)
			return (&s[len]);
		len--;
		if (s[0] == c)
			return (s);
	}
	return (0);
}

/*int	main(void)
{
	const char str[] = "consentrao";

	int c = 'o';

	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
}*/
