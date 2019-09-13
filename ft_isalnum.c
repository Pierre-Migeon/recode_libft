
#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}



int	main()
{
	char c;

	c = 'Z';

	printf ("Isalnum returns %i\n", ft_isalnum(c));

}
