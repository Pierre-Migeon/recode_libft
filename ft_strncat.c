
#include <stdio.h>




char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	while (*s1)
		s1++;
	while (n--)
		*(s1++) = *(s2++);
	*s1 = '\0';
	return (s1);
}

int	main()
{
	char str1[8] = "hello";
	char str2[] = "hi";

	ft_strncat(str1, str2, 2);

	printf( "String1 is now %s\n", str1); 

	return (0);
}
