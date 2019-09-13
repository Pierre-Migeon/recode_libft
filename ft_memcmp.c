#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *)s1++) - *((unsigned char *)s2++))
			return (*((unsigned char *)--s1) - *((unsigned char *)--s2));
	}
	return (0);
}


int	main()
{
	char a;
	char b;
	int i;

	printf ( "type two characters:\n" );
	scanf ( "%c %c", &a, &b);
	printf ( "Those characters are %c, %c\n", a, b );
	
	i = memcmp(&a, &b, 1);
	printf ( "the difference is %i\n", i);

	i = ft_memcmp(&a, &b, 1);
	printf ( "the difference is %i\n", i);

	return (0);
}
