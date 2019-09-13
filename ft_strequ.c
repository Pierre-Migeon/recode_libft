#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strcmp(s1, s2))
		return (0);
	else
		return (1);
}

int	main()
{
	char str[] = "A";
	char str2[] = "A";
	printf ("strequ returns %i\n", ft_strequ(str, str2));
		
	return (0);
}
