



t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlink;

	if (!(content = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		newlink->content = NULL;
		newlink->content_size = 0;
	}
	else
	{
		if(!(newlink->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(newlink->content, content, content_size);
		newlink->content_size = content_size;
	}
	newlink->next = NULL;
	return (newlink);
}
