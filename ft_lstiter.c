

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		(*f)(lst);
		lst = lst->next;
	}
}
