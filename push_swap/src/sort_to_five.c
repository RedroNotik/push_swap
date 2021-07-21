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

char	*four_elem(t_list **a, t_list **b, char *answ, int min)
{
	while ((*a)->content != min)
		answ = r_rotate(&(*a), answ, 0);
	answ = push(&(*a), &(*b), answ, 0);
	answ = three_elem(&(*a), answ, 0);
	answ = push(&(*b), &(*a), answ, 1);
	return (answ);
}

char	*five_elem(t_list **a, t_list **b, char *answ, int min)
{
	t_list	*help;

	while ((*a)->content != min)
		answ = rotate(&(*a), answ, 0);
	answ = push(&(*a), &(*b), answ, 0);
	min = (*a)->content;
	help = *a;
	while (help->next)
	{
		if (help->content < min)
			min = help->content;
		help = help->next;
	}
	if (help->content < min)
		min = help->content;
	answ = four_elem(a, b, answ, min);
	answ = push(&(*b), &(*a), answ, 1);
	return (answ);
}
