#include <stdio.h>
#include <string.h>


char  *ft_strstr(const char *haystack, const char *needle)
{
	int i;

	if (!(*needle))
		return ((char *)haystack);

	while (*haystack)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i))
			i++;
		if (!(*(needle + i)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}


int main()
{
	char str1[] = "this string has that word";
	char str2[] = "string";
	char *str3;

	str3 = ft_strstr(str1, str2);

	printf ("String 3 is %s\n", str3);

  return (0);
}
