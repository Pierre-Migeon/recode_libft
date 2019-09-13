#include <ctype.h>
#include <stdio.h>


int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}


int	main()
{
	char c = 0;

	while (c < 127)
	{
		if (ft_isprint(c) != isprint(c))
			printf ( "there was a difference for the two functions at the character %c\n", c);
		c++;
	}
	return (0);
}
