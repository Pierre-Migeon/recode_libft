
#include <string.h>
#include <stdio.h>


void	*ft_memset(void *b, int c, size_t len)
{
	while(len--)
		*((unsigned char *)b++) = (unsigned char)c;
	return (b);
}



int	main()
{
	char str[] = "hello";
	char *p = str;

	p = ft_memset(p, 65, 8);

	printf ("The string is now %s\n", str);

	return (0);
}
