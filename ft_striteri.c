

#include <stdio.h>
#include <string.h>


void	dummy_function(unsigned int i, char *s)
{
	if (i != 5)
		*s = 'A';
}




void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = -1;
	if (s == NULL || f == NULL)
		return ;
	while (*(s + ++i))
		(*f)(i, s + i);
}

int	main()
{
	char str[] = "This wasn't As";
	ft_striteri(str, dummy_function);

	printf ( "the string is now %s\n", str);

}
