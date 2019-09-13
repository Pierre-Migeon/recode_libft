
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main()
{
	char a[] = "HELLO\n";
	char *b = a;
	while(*b)
        	ft_putchar(*(b++));
	return (0);
}

