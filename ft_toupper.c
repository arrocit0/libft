/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:17:17 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/11 12:43:32 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c -= 32);
	return (c);
}

/*int	main(void)
{
	printf("%d\n", toupper(123));

	printf("%d\n", ft_toupper(123));



}*/
