/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:52:58 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/24 04:40:26 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[len] != 0)
		len++;
	if (n == 0)
		return (len);
	while (i < (n - 1) && (src[i] != 0))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*int	main(void)
{
	char	dest2[] = ",,,,,,.....,";
	//char	nono[] = "____________________";
	char	src2[] = "piau";
	char	dest[] = ",,,,,,.....,";
	//char	aiai[] = "____________________";
	char	src[] = "piau";

	printf("%lu\n", strlcpy(dest2, src2, 4));

	printf("ft_strlcpy return (%zu)\n", ft_strlcpy(dest, src, 4));

	printf("dest = %s\n", dest2);
	printf("src = %s\n", src2);
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);

}*/
