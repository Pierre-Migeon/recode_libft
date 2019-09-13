#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{

	while (n--)
	{
		*((unsigned char *)dst) = *((unsigned char *)src++);
		if (*((unsigned char *)dst++) == (unsigned char)c)
			return (dst);
	}
	return (NULL);
}


int	main()
{
	char *str;
	char str1[] = "Helloooooooooo";
	char str2[] = "AyyYHoooo!";

	str = ft_memccpy(str1, str2, (int)'H', 9);

	printf ("str is now %s\n", str);

}
