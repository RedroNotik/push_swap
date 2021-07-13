//
// Created by Gaynell Hanh on 7/13/21.
//

#include "../includes/push_swap.h"

t_list *sort(t_list *a)
{
	t_list *tmp;

	tmp = a;
	while (tmp->next)
	{
		while (tmp-)
	}
	return (a);
}
void sort_list(t_list *a, int op_elem, int size)
{
	t_list *b;
	t_list *help;
	int 	i;
	int		j;

	b = NULL;
	i = 0;
	help = a;
	while (i < size)
	{
		if (a->content >= op_elem)
			push(&a, &b);
		else if (ft_lstsize(a) > 1)
			a = rotate(a);
		i++;
	}
	j = ft_lstsize(a);
	i = 0;
	a = sort(a);
//	while (a->next)
//	{
//		if (a->content > a->next->content)
//		{
//			a = swap(a);
//			a=a->next;
//		}
//		else
//		{
//			a=a->next;
//		}
//	}
	//// CHECK
	//push(&a, &b);
	//a = a->next;
	//a = a->next;
	//printf("%d -- A\n", a->content);
	//size = ft_lstsize(b);
	//printf("%d -- B %d\n", b->content, size);
	size = ft_lstsize(a);
	printf("%d -- A %d\n", a->content, size);
	size = ft_lstsize(b);
	printf("%d -- B %d\n", b->content, size);
	//// END CHECK
}
