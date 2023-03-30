/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 03:44:28 by rocimart          #+#    #+#             */
/*   Updated: 2023/03/30 20:31:08 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	int		i;
	size_t	x;

	i = 0;
	x = 1;
	if (!c && s[i] == c)
		return (0);
	while (s[i] == c)
		i++;
	if ((s[i] == 0))
		return (0);
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] == '\0')
				return (x);
			if (s[i] != c)
				x++;
		}
		i++;
	}
	return (x);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	n;
	size_t	j;
	char	**m;

	i = 0;
	n = 0;
	j = 0;
	x = 0;
	if (!s)
		return (NULL);
	m = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (m == NULL)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (x < count_words(s, c))
	{
		if (s[i] == c || s[i] == '\0')
		{
			while (s[i] == c && s[i] != '\0')
			{
				j++;
				i++;
			}
			m[x] = ft_substr(s, (unsigned int)(i - n - j), n);
			if (m[x] == NULL)
			{
				while (x--)
					free(m[x]);
				free(m);				
				return (NULL);
			}
			n = 0;
			j = 0;
			x++;
		}
		n++;
		i++;
	}
	m[x] = NULL;
	return (m);
}

/*int	main(void)
{
	char	**m;
	int		i;
//	char	*s = "ai---ke-iluu!-----";
//	char	c = '-';

//	i = 0;
//	m = ft_split(, c);
	printf("______________________\n");
//	while (i <= count_words(s, c))
//	{
//		printf("i->%d\t%s\n", i, m[i]);
//		i++;
//	}
//
//	char *str = "\0aa\0bbb";

	i = 0;
	m = ft_split("", '\0');

	printf("______________________\n");
	printf("%zu\n", count_words("hello!", ' '));
	while (m[i])
	{
		printf("%s\n", m[i]);
		i++;
	}
}*/
