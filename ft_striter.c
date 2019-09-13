

#include <string.h>
#include <stdio.h>

void    charfunct(char *s)
{
        while(*s)
                *(s++) = 'A';
}

void ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return;
	while (*s)
		(*f)(s++);
}

int	main()
{
	char char1[] = "not As";
	ft_striter(char1, charfunct);
	printf ("string is now %s\n", char1);
	return (0);
}
