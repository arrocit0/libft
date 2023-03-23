#include "libft.h"

char    *front_trim(const char *s1, char c)
{
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i] != c)
		{
			return ((char *)&s1[i]);
		}   
	i++;
	}
	return(NULL);
}

int		back_trim(char *src, char c, int size)
{	
	int		n;

	n = 0;
	while(src[size - 1])
	{      
		if(src[size - 1] != c)
			return(n);
	size--;
	n++;
	}
	return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	char	*src;
	char	*m;
	char	c;
	int		i;
	int		len;
	int 	size;

	i = 0;
	while(set[i] != 0)
	{
		c = (char)set[i];
		src = front_trim(s1, c);
		size = strlen(src);
		printf("size0:%d\n", size);
		len = back_trim(src, c, size);
		
		printf("size2:%d\t\t\t", len);
		//printf("n:%d\n", n);
	i++;
	}
	m = malloc(sizeof(char) * (size - len));
	if (m == NULL)
		return (NULL);
	strncpy(m, src, (size - len));
	m[size - len] = '\0';

return (m);
}

int main (void)
{
	char const set[] = "- ";
	printf("|%s\n", ft_strtrim(" -aba ", set));
}