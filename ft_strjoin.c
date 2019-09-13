#include "libft.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *newstring;
	size_t len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!((newstring = (char *)malloc(sizeof(char) * len + 1))))
		return (NULL);
	printf ("Malloced\n");
	newstring = ft_strcpy(newstring, s1);
	newstring = ft_strcat(newstring, s2);
	return (newstring);
}

int	main()
{
	char str1[] = "Hello ";
	char str2[] = "World\n";
	char *new;

	new = ft_strjoin(str1, str2);
		
	printf ("The newstring is %s", new);
	return (0);
}
