#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*m;
	int		i;

	i = 0;
	m = lst;
	while (m)
	{
		m = m->next;
		i++;
	}
	return (i);
}
