//
// Created by Gaynell Hanh on 7/19/21.
//
#include "../includes/push_swap.h"

void	free_list(t_list **a)
{
	t_list	*help;
	t_list	*p;

	p = *a;
	while (p)
	{
		help = p->next;
		free(p);
		p = help;
	}
	*a = NULL;
}
