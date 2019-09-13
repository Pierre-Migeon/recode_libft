
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while(*s1 && *s2 && *((unsigned char *)s1) == *((unsigned char *)s2) && --n)
	{
		s1++;
		s2++;
	}
	return (*((unsigned char *)s1) - *((unsigned char *)s2));
}

int	main()
{
	char str1[100];
	char str2[100];

	printf ( "Type two strings:\n");
	scanf ("%s %s", str1, str2);

	printf ("difference is %i\n", ft_strncmp(str1, str2, 1));

	return (0);
}
