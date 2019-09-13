#include <stdio.h>

int	ft_atoi(const char *str)
{
	int out;
	int n;

	out = 0;
	n = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		n = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		out = out * 10 + *(str++) - '0';
	return (n ? -out : out);
}

int	main()
{
	char str[] = "  -2147483648";
	printf ("String as an int is %i\n", ft_atoi(str));

	return (0);
}
