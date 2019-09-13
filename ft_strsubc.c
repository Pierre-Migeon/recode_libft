
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *subset;

	if (!(out = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (!s || !s[start] || !s[start + len - 1])
		return (NULL);	
	while(start--)
		s++;
	out = ft_strncpy(out, s, len);
	*(out + len) = '\0';
	return (out);
}

