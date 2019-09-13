
#include <stdio.h>





char	*ft_strcat(char *s1, const char *s2)
{
	while(*s1)
		s1++;
	while(*s2)
		*(s1++) = *(s2++);
	*s1 = '\0';
	return (s1);
}


/*
int	main()
{
	char str1[] = "hello ";
	char str2[] = "world";
	char *str3 = str1;
	char str4[] = "!\n";

	str3 = ft_strcat(str1, str2);
	str3 =ft_strcat(str1, str4);

	printf("The catted string now reads: %s", str1);
	
	return (0);
}*/
