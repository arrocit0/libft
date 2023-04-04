/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 03:44:28 by rocimart          #+#    #+#             */
/*   Updated: 2023/04/03 16:11:21 by rocimart         ###   ########.fr       */
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

void	free_seg(char **m, size_t x)
{
	if (m[x] == NULL)
	{
		while (x--)
			free(m[x]);
		free(m);
		m = NULL;
	}
}

char	**conversion(char **m, size_t i, char const *s, char c)
{
	size_t	j;
	size_t	x;
	size_t	n;

	j = 0;
	x = 0;
	n = 0;
	while (x < count_words(s, c))
	{
		if (s[i] == c || s[i] == '\0')
		{
			while (s[i + j] == c && s[i + j] != '\0')
				j++;
			m[x] = ft_substr(s, (unsigned int)(i - n), n);
			if (!m[x])
				return (free_seg(m, x), NULL);
			i += j;
			n = 0;
			j = 0;
			x++;
		}
		n++;
		i++;
	}
	return (m);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	n;
	char	**m;

	i = 0;
	n = 0;
	x = 0;
	if (!s)
		return (NULL);
	m = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (m == NULL)
		return (NULL);
	m[count_words(s, c)] = NULL;
	while (s[i] == c && s[i] != '\0')
		i++;
	m = conversion(m, i, s, c);
	if (!m)
		return (NULL);
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
