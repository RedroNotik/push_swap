//
// Created by Gaynell Hanh on 7/13/21.
//
#include "../includes/push_swap.h"

char *push(t_list **from, t_list **to, char *str, int b)
{
	t_list	*tmp;

	if (b == 0)
		str = new_str(str, "pb");
	else
		str = new_str(str, "pa");
	tmp = *from;
	*from = (*from)->next;
	tmp->next = *to;
	*to = tmp;
	return (str);
}


char *rotate(t_list *st, char *str, int b)
{
	t_list *tmp;
	t_list	*help;

	if (b == 0)
		str = new_str(str, "ra");
	else
		str = new_str(str, "rb");
	help = st->next;
	tmp = st;
	while (st->next)
		st = st->next;
	tmp->next = 0;
	st->next = tmp;
	return (str);
}

char *r_rotate(t_list *st, char *str, int b)
{
	t_list *tmp;
	t_list	*prev;

	if (b == 0)
		str = new_str(str, "rra");
	else
		str = new_str(str, "rrb");
	tmp = st;
	while (st->next)
	{
		prev = st;
		st = st->next;
	}
	st->next = tmp;
	prev->next = 0;
	return (str);
}

char *swap(t_list *st, char *str, int b)
{
	t_list *tmp;
	t_list *hlp;
	t_list *hlp2;

	if (b == 0)
		str = new_str(str, "sa");
	else
		str = new_str(str, "sb");
	tmp = st;
	hlp = tmp->next;
	hlp2 = hlp->next;
	hlp->next = tmp;
	tmp->next = hlp2;
	st = hlp;
	return (str);
}