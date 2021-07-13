#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*help;
	t_list	*p;

	p = *lst;
	while (p)
	{
		del(p->content);
		help = p->next;
		free(p);
		p = help;
	}
	*lst = NULL;
}
