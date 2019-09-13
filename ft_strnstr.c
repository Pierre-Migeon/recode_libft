
#include <stdio.h>
#include <string.h>


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int len2;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len--)
	{
		i = 0;
		len2 = len + 1;
		while (*(haystack + i) == *(needle + i) && len2--)
			i++;
		if (*(needle + i) == '\0')
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

	str3 = ft_strnstr(str1, str2, 12);

	printf ("String 3 is %s\n", str3);

  return (0);
}
