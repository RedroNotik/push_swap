//
// Created by Gaynell Hanh on 7/13/21.
//
#include "../includes/push_swap.h"

void push(t_list **from, t_list **to)
{
	t_list	*tmp;

	tmp = *from;
	*from = (*from)->next;
	tmp->next = *to;
	*to = tmp;
}


t_list *rotate(t_list *st)
{
	t_list *tmp;
	t_list	*help;

	help = st->next;
	tmp = st;
	while (st->next)
		st = st->next;
	tmp->next = 0;
	st->next = tmp;
	return (help);
}

t_list *r_rotate(t_list *st)
{
	t_list *tmp;
	t_list	*prev;

	tmp = st;
	while (st->next)
	{
		prev = st;
		st = st->next;
	}
	st->next = tmp;
	prev->next = 0;
	return (st);
}

t_list *swap(t_list *st)
{
	t_list *tmp;
	t_list *hlp;
	t_list *hlp2;

	if (ft_lstsize(st) < 2)
		return (st);
	tmp = st;
	hlp = tmp->next;
	hlp2 = hlp->next;
	hlp->next = tmp;
	tmp->next = hlp2;
	st = hlp;
	return (st);
}