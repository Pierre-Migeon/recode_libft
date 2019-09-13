

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char	*dst, const char *src)
{
	int i;

	i = -1;
	while(src[++i])
		*(dst + i) = *(src + i);
	*(dst + i) = '\0';
	return (dst);
}

/*
int	main()
{
	char str1[] = "Hell000000";
	char str2[] = "1  word";
	
	strcpy(str1, str2);
	
	printf ("After the native function, str1 is %s\n", str1);

	char str3[] = "Hell";
	ft_strcpy(str3, str2);
	
	printf ( "After my function's copy, str1 is %s\n", str3);

	return (0);
}*/
