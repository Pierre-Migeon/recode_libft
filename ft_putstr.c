
#include <unistd.h>


void	ft_putstr(char const *s)
{
	while(*s)
		write(1, s++, 1);
}



/*int	main()
{
	char str[] = "This is the string\n";
	ft_putstr(str);

	return (0);
} */
