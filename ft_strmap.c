#include "./libft.h"

size_t	ft_strlen(const char *s)
{
	return (*s ? 1 + ft_strlen(++s) : 0);
}

char	dummy_funct(char c)
{
	c = 'A';
	return (c);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *out;
	int len;
	int i;

	i = 0;
	len = strlen(s);
	if (!(out = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	*(out + len) = '\0';
	while (*(s + i))
	{
		*(out + i) = (*f)(s[i]);
		i++;
	}
	return (out);
}

int main()
{
	char str[] = "Hell!";
	char *str2 = ft_strmap(str, dummy_funct);
	printf ("Str2 is %s\n", str2);
	return (0);
}
