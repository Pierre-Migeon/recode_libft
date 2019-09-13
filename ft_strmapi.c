



char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *out;
	int len;
	int i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(out = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
		 *(out + i) = (*f)(i, s[i]);
	*(out + len) =  '\0';
	return (out);
}
