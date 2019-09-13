#include <string.h>
#include <stdio.h>


void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*((unsigned char *)s) && n--)
		if (*((unsigned char *)s++) == (unsigned char)c)
			return ((void *)--s);
	return (NULL);
}

int	main()
{
	char str1[] = "BBBBAB\n";
	char *str;

	str = ft_memchr(str1, 65,7);
	printf ("String is %s", str);

	return (0);
}
