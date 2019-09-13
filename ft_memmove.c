#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (dst == src)
		return (dst);
	if (src > dst)
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			++i;
		}
	if (src < dst)
		while (len--)
			*((char *)dst + len) = *((char *)src + len);
	return ((char *)dst);
}

int	main()
{
	char str[] = "ABCDEFG";
	char *str1 = str;
	char *str2 = str + 3;

	str1 = ft_memmove(str2, str1, 4);

	printf ("string is now %s\n", str);

	return (0);
}
