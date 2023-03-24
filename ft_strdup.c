/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:48:29 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/17 03:56:39 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*m;
	int		s_len;
	int		i;

	s_len = ft_strlen(s);
	m = malloc(s_len + 1);
	i = 0;
	if (m == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		m[i] = s[i];
		i++;
	}
	m[i] = '\0';
	return (m);
}

/*int	main(void)
{




}*/
