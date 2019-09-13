
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *origd;

	origd = dst;
	while (n--)
		*((char *)dst++) = *((const char *)src++);
	return (origd);
}

int	main()
{
	char str1[] = "helloworld";
	char str2[] = "goodbye";
	char *str = str1;

	str = ft_memcpy(str1, str2, 7);

	printf ( "string 1 is now %s\n", str);

	return (0);
}
