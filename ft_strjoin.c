/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:45:39 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/23 21:15:03 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s_len;
	char	*m;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	s_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	m = malloc(s_len);
	if (m == NULL)
		return (NULL);
	ft_strlcpy(m, s1, ft_strlen(s1) + 1);
	ft_strlcat(m, s2, s_len);
	return (m);
}

/*int	main(void)
{
	printf("res: %s", ft_strjoin("ai ","paquita"));

}*/
