
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	return (*s ? 1 + strlen(++s) : 0);
}

char	*ft_strdup(const char *s1)
{
	size_t	i;	
	char 	*out;

	i = ft_strlen(s1);
	if (!(out = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	*(out + i) = '\0';
	while (i--)
		*(out + i) = *(s1 + i);
	return (out);
}

int	main()
{
	char str1[] = "Hello";
	char *str2 = strdup(str1);
	char *str3 = ft_strdup(str1);

	printf ( "The native copy returned %s and my copy returned %s\n", str2, str3 );

	return (0);
}
