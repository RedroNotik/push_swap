#include "../includes/libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list *));
	if (!str)
		return (NULL);
	str->next = 0;
	str->flag = 0;
	str->content = content;
	return (str);
}
