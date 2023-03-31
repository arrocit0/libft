/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:32:30 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/28 18:05:51 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while(s[i])
	{
		(*f)(i, &s[i]);
		i++;	
	}
}

/*int	main(void)
{
	printf("%s\n", ft_striteri("oye como va", ft_toupper));


}*/
