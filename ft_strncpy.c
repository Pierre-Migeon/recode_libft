
#include <stdio.h>


char	*ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t i;

	i = -1;
	while (src[++i] && i < len)
		*(dst + i) = *(src + i);
	*(dst + i ) = '\0';
	while (i < len)
		*(dst + i++) = '\0';
	return (dst);
}

/*int	main()
{
	char str[] = "TTTTTTT";
	char str2[] = "AB";

	ft_strncpy(str, str2, 5);

	printf ("str1 is now %s\n", str);

	return (0);
}*/
