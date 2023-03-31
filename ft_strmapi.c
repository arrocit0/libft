/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:07:16 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/28 17:27:27 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int 	i;
	char			*m;

	i = 0;
	m = malloc(strlen(s) + 1);
	if(m == NULL)
		return (NULL);
	while(s[i])
	{
		m[i] = (*f)(i, s[i]);
		i++;
	}
	m[i] = '\0';
	return(m);
}

/*int	main(void)
{

	printf("%s\n", ft_strmapi("oye como va", ft_toupper));


}*/
