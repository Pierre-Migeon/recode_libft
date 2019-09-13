
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putstr(char *s)
{
	while(*s)
		write(1, s++, 1);
}

void	ft_putnbr(int n)
{	
        if (n == -2147483648)
        {
                ft_putstr("2147483648");
                return;
        }
	if (n < 0)
	{
		n = -n; 
		ft_putchar('-');
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}


int	main()
{
	ft_putnbr(-100);
	return (0);
}
