
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	while ( n-- )
		*((char *)s++) = 0;
}

/*
int	main()
{
	char string[] = "hello";
	ft_bzero(string + 1, 1);
	printf ( "%s", string);
}
*/
