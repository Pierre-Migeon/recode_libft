
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	return (*s ? 1 + ft_strlen(++s) : 0);
}


char *ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen(s) + 1;
	while (i--)
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	return (NULL);
}



int	main()
{
	char str[] = "welp we did it";
	int c = 'w';
	char *str2;

	str2 = ft_strrchr(str, c);

	printf( "The string points to %s\n", str2);

	return (0);
}
