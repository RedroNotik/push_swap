//
// Created by Gaynell Hanh on 7/16/21.
//

#include "../includes/push_swap.h"

char	*two_elem(t_list **a, char *answ, int b)
{
	t_list	*help;

	help = *a;
	if (help->content > help->next->content)
		answ = rotate(&help, answ, b);
	*a = help;
	return (answ);
}

char	*three_elem(t_list **a, char *answ, int b)
{
	if ((*a)->content < (*a)->next->content
		&& (*a)->next->content < (*a)->next->next->content)
		return (answ);
	else if ((*a)->content < (*a)->next->next->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		answ = swap(&(*a), answ, b);
		answ = rotate(&(*a), answ, b);
	}
	else if ((*a)->next->content < (*a)->content
		&& (*a)->content < (*a)->next->next->content)
		answ = swap(&(*a), answ, b);
	else if ((*a)->next->content < (*a)->next->next->content
		&& (*a)->content > (*a)->next->next->content)
		answ = rotate(&(*a), answ, b);
	else if ((*a)->next->next->content < (*a)->content
		&& (*a)->content < (*a)->next->content)
		answ = r_rotate(&(*a), answ, b);
	else if ((*a)->next->next->content < (*a)->next->content
		&& (*a)->content > (*a)->next->content)
	{
		answ = swap(&(*a), answ, b);
		answ = r_rotate(&(*a), answ, b);
	}
	return (answ);
}

char	*four_elem(t_list **a, t_list **b, char *answ, int flag)
{
	t_opelem zn;
	int from;
	int to;

	if (flag == 1)
	{
		from = 1;
		to = 0;
	}
	else
	{
		from = 0;
		to = 1;
	}
	zn = min_max_mid((*a)->content, (*a), zn, ft_lstsize(*a));
	while ((*a)->content != zn.min)
		answ = r_rotate(&(*a), answ, from);
	answ = push(&(*a), &(*b), answ, from);
	answ = three_elem(&(*a), answ, from);
	answ = push(&(*b), &(*a), answ, to);
	return (answ);
}

char	*five_elem(t_list **a, t_list **b, char *answ, int flag)
{
	t_list	*help;

	t_opelem zn;
	int from;
	int to;

	if (flag == 1)
	{
		from = 1;
		to = 0;
	}
	else
	{
		from = 0;
		to = 1;
	}
	zn = min_max_mid((*a)->content, (*a), zn, ft_lstsize(*a));
	while ((*a)->content != zn.min)
		answ = rotate(&(*a), answ, from);
	answ = push(&(*a), &(*b), answ, from);
	zn.min = (*a)->content;
	help = *a;
	while (help->next)
	{
		if (help->content < zn.min)
			zn.min = help->content;
		help = help->next;
	}
	if (help->content < zn.min)
		zn.min = help->content;
	answ = four_elem(a, b, answ, flag);
	answ = push(&(*b), &(*a), answ, to);
	return (answ);
}
