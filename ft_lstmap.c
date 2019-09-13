


t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	if (!lst || !f)
		return (NULL);
	t_list *new;
	t_lst *start;

	new = (*f)(lst);
	start = new;
	lst = lst->next;
	while (lst)
	{
		new->next = (*f)(lst);
		new = new->next;
		lst = lst->next;
	}
	return (start);
}
