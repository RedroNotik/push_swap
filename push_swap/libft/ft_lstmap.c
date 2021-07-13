#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*new1;

	new = NULL;
	if (!lst)
		return (0);
	tmp = lst;
	while (tmp)
	{
		if ((*f)(tmp->content))
		{
			new1 = ft_lstnew((*f)(tmp->content));
			if (!new1)
				return (0);
			ft_lstadd_back(&new, new1);
		}
		else
		{
			ft_lstclear(&new, del);
			return (0);
		}
		tmp = tmp->next;
	}
	return (new);
}
