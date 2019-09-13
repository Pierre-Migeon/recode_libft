


#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *out;
	if (!(out = (void *)malloc(size)))
		return (NULL);
	ft_bzero(out, size);
	return (out);
}


int	main()
{
	char *str;

	str = ft_memalloc(5);

	free(str);



}
