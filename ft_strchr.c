

#include <stdio.h>


size_t	ft_strlen(const char *s)
{
	return (*s ? 1 + ft_strlen(++s) : 0);
}

char *ft_strchr(const char *s, int c)
{
	int i;

	i = -1;
	while (++i < (int)ft_strlen(s) + 1)
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	return (NULL);
}

int	main()
{
	char str[] = "help we did it";
	int c = 'w';
	char *str2;

	str2 = ft_strchr(str, c);

	printf( "The string points to %s\n", str2);

	return (0);
}
