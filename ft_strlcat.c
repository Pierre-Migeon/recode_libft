
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while(*dst && dstsize)
	{
		dstsize--;
		dst++;
	}
	while(*src && dstsize)
	{
		*(dst++) = *(src++)
		dstsize--;
		i++;
	}
	if (dstsize)
	{
		*dst = '\0';
		i++;
	}
	return (i)
}



int	main()
{


	return (0);
}
