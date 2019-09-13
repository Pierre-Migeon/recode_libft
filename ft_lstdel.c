



void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *next;

	if (!alst || !*alst)
		return;
	current = *alst;
	while(current)
	{
		next = current->next;
		if (*del)
			(*del)(current->content, current->content_size);
		free(current);
		current = next;
	}
	*alst = NULL;
}
