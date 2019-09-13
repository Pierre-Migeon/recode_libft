#include "./libft.h"

int	numlen(int n)
{
	int i;

	i = 1;
	while(n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char *out = NULL;
	int str_len;
	int neg_flag;

	neg_flag = (n < 0) ? 1 : 0;
	if (n == -2147483648)
		return ("-2147483648");
	str_len = numlen(n);
	if (!(out = (char *)malloc(sizeof(char) * str_len + neg_flag + 1)))
		return (NULL); 
	out[str_len-- + neg_flag] = '\0';
	while (str_len + neg_flag >= 0)
	{
		out[str_len-- + neg_flag] = (n < 0) ? (-n % 10) + '0' : (n % 10) + '0';
		n /= 10;
	}
	if (neg_flag)
        	out[0] = '-';
	return (out);
}

int	main()
{
	char *Str;
	int i = -2147483648;
	int i2;

	while (i <= 2147483647)
	{
		Str = ft_itoa(i);
		i2 = atoi(Str);
		if (i2 != i)
			printf ("An error was found for int %i\n", i);
		i += 1;
	}
	printf ("Testing is completed, and any errors were printed above. If none, then code works with all possible ints!\n");
	return (0);
}
