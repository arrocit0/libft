#include "libft.h"

char	*front_trim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(s1[i])
	{
		while(s1[i] != set[j])
		{
			j++;
			if(set == '\0')
				return ((char *)&s1[i]);
		}
	j = 0;
	i++;
	}
	return(NULL);
}



char	*ft_strtrim(char const *s1, char const *set)
{
	char	*src;
	char	*m;
	char	c;
	int		i;
	int 	size;

	i = 0;
	if (set == NULL || s1 == NULL)
		return(NULL);
	//while(set[i] != 0)
	//{
		c = (char)set[i];
		//printf("set[i]:%c\n", c);
		src = front_trim(s1, set);
		size = strlen(src);
		//printf("size0:%d\n", size);
		//printf("size2:%d\t\t\t", len);
		//printf("n:%d\n", n);
	i++;
//	}
	m = malloc(sizeof(char) * (size));
	if (m == NULL)
		return (NULL);
	ft_strlcpy(m, src, size);
	m[size] = '\0';

return (m);
}

int main (void)
{
	char const set[] = "- ";
	char const s1[] = " -a ba ";
	printf("|%s\n", ft_strtrim(s1, set));
	printf("%lu\n", strlen(ft_strtrim(s1, set)));
}
