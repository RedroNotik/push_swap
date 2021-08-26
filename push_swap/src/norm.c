//
// Created by Gaynell Hanh on 8/26/21.
//

#include "../includes/push_swap.h"

char	*help_func2(t_opelem *zn, t_list **a, t_list **b, char *ans)
{
	zn->to = (*b)->content + 1;
	(*b)->flag = -1;
	ans = push(&(*b), &(*a), ans, 1);
	ans = rotate(&(*a), ans, 0);
	return (ans);
}

char	*help_func1(t_opelem *zn, t_list **a, t_list **b, char *ans)
{
	zn->to = (*a)->content + 1;
	(*a)->flag = -1;
	if ((*b) && (*b)->next && (*b)->content != zn->min)
		ans = rrotate(&(*a), &(*b), ans);
	else
		ans = rotate(&(*a), ans, 0);
	return (ans);
}
