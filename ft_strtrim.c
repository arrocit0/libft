/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:43:31 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/24 16:57:33 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*front_trim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j])
		{
			j++;
			if (set[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return ((char *)&s1[i]);
}

int	back_trim(char *src, const char *set, int size)
{
	int	n;
	int	j;

	n = 0;
	if (size == 0)
		return (0);
	while (src[size - 1])
	{
		j = 0;
		while (src[size - 1] != set[j])
		{
			j++;
			if (set[j] == '\0')
				return (n);
		}
		size--;
		n++;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*src;
	char	*m;
	int		len;
	int		size;

	if (set == NULL || s1 == NULL || *set == '\0')
		return (ft_strdup(s1));
		src = front_trim(s1, set);
			size = strlen(src);
		len = back_trim(src, set, size);
	m = malloc(sizeof(char) * (size - len + 1));
	if (m == NULL)
		return (NULL);
	ft_strlcpy(m, src, (size - len + 1));
	return (m);
}

/*int main (void)
{
	char const set[] = " ";
	char const s1[] = "         ";
	printf("|%s\n", ft_strtrim(s1, set));
	printf("%lu\n", strlen(ft_strtrim(s1, set)));
}*/
