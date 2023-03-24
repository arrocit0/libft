/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:31:46 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/24 15:27:34 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*m;
	unsigned int	i;
	unsigned int	u;
	unsigned int	s_len;
	unsigned int	i2;

	i2 = 0;
	i = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
		start = s_len;
	if (len > s_len - start)
		len = s_len - start;
	m = malloc(len + 1);
	if (m == NULL)
		return (NULL);
	u = start;
	while (s[i])
	{
		if (i == u && u < len + start)
		{
			m[i2] = s[i];
			i2++;
			u++;
		}
		i++;
	}
	m[i2] = '\0';
	return (m);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("123456789", 4, 2));
}*/
	/*while(len > 0 && s[start]) {
		m[i++] = s[start++];
		--len;
	}
	m[i] = '\0';*/
