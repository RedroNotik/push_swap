//
// Created by Gaynell Hanh on 7/13/21.
//
#include "../includes/push_swap.h"

char	*rrotate(t_list **a, t_list **b, char *answ)
{
	rotate(&(*a), NULL, 0);
	rotate(&(*b), NULL, 1);
	answ = new_str(answ, "rr\n");
	return (answ);
}

char	*push(t_list **from, t_list **to, char *str, int b)
{
	t_list	*tmp;
	t_list	*helpa;
	t_list	*helpb;

	helpa = *from;
	helpb = *to;
	if (b == 0)
		str = new_str(str, "pb\n");
	else
		str = new_str(str, "pa\n");
	tmp = *from;
	helpa = helpa->next;
	tmp->next = helpb;
	helpb = tmp;
	*from = helpa;
	*to = helpb;
	return (str);
}

char	*rotate(t_list **st, char *str, int b)
{
	t_list	*tmp;
	t_list	*help;

	help = *st;
	if (b == 0)
		str = new_str(str, "ra\n");
	else
		str = new_str(str, "rb\n");
	tmp = *st;
	while (help->next)
		help = help->next;
	*st = tmp->next;
	tmp->next = 0;
	help->next = tmp;
	return (str);
}

char	*r_rotate(t_list **st, char *str, int b)
{
	t_list	*tmp;
	t_list	*prev;

	if (b == 0)
		str = new_str(str, "rra\n");
	else
		str = new_str(str, "rrb\n");
	tmp = *st;
	while ((*st)->next)
	{
		prev = *st;
		*st = (*st)->next;
	}
	(*st)->next = tmp;
	prev->next = 0;
	return (str);
}

char	*swap(t_list **st, char *str, int b)
{
	t_list	*tmp;
	t_list	*hlp;
	t_list	*hlp2;

	if (b == 0)
		str = new_str(str, "sa\n");
	else
		str = new_str(str, "sb\n");
	tmp = *st;
	hlp = tmp->next;
	hlp2 = hlp->next;
	hlp->next = tmp;
	tmp->next = hlp2;
	*st = hlp;
	return (str);
}
