
#include "libft.h"

int	count_words(const char *s, char c)
{
	int word_count;
	int i;

	word_count = 0;
	i = 0;
	while(s[i])
	{
		if (*(s + i) != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word_count++;
		++i;
	}
	return (word_count);
}


int	strlen_char(const char *s, char c)
{
	int len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char **split_strings;
	int words;
	int w_len;
	int i;

	i = 0;
	words = count_words(s, c);
	if (!s || !c || !(split_strings = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (*s && i < words)
	{
		while (*s == c)
			s++;
		w_len = strlen_char(s, c);
		split_strings[i] = ft_strnew((size_t)w_len);
		split_strings[i] = ft_strncpy(split_strings[i], s, w_len);
		++i;
		s += w_len;
	}
	split_strings[i] = NULL;
	return (split_strings);	
}

int	main()
{
	char str[] = "******";
	char **s;

	s = ft_strsplit(str, '*');


	while (*s)
	{	
		ft_putstr(*s++);
		write(1, "\n", 1);
	}

	return (0);
}
