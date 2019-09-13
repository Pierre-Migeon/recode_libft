
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *trimmed;
	size_t slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s) - 1;
	while (*(s + slen) == ' ' || *(s + slen) == '\n' || *(s + slen) == '\t')
		slen--;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		slen--;
		s++;
	}
	if (!(trimmed = (char *)malloc(sizeof(char) * (slen + 2))))
		return (NULL);
	trimmed = ft_strcpy(trimmed, s);
	*(trimmed + ++slen) = '\0';
	return (trimmed);
}

/*int	main()
{
	char str[] = " ";
	char *str2;

	str2 = ft_strtrim(str);

	printf ("The string is now \"%s\"\n", str2);

	return (0);
}*/
