#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
	int length;

	length = 0;
	if (!s)
		return ;
	while (*(s + length))
		length++;
	write(fd, s, length);
}
