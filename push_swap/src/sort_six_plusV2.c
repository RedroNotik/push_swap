//
// Created by Gaynell Hanh on 7/24/21.
//
#include "../includes/push_swap.h"

char	*sort_six_swap(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	int		i;

	i = 0;
	while (i++ < zn.size)
	{
		if ((*a)->content <= zn.mid)
		{
			(*a)->flag = 1;
			answ = push(&(*a), &(*b), answ, 0);
		}
		else
			answ = rotate(&(*a), answ, 0);
	}
	return (answ);
}

char	*sort_six_second(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	int bsize;
	int i;
	t_list *help;

	i = 0;
	bsize = ft_lstsize(*b);
	while (i < bsize)
	{
		(*b)->flag++;
		if ((*b)->content > zn.mid)
			answ = push(&(*b), &(*a), answ, 1);
		else if ((*b)->next)
			answ = rotate(&(*b), answ, 0);

		i++;
	}
	help = *b;
	i = 0;
	while (help->next)
	{
		if (help->content == zn.min)
			break;
		help = help->next;
		i++;
	}
	if (help->content == zn.min)
		i++;
	if (i > bsize / 2)
	{
		while ((*b)->content != zn.min && (*b)->next)
			answ = r_rotate(&(*b), answ, 1);
	}
	else
	{
		while ((*b)->content != zn.min && (*b)->next)
			answ = rotate(&(*b), answ, 1);
	}
	(*b)->flag = -1;
	answ = push(&(*b), &(*a), answ, 1);
	answ = rotate(&(*a), answ, 0);
	return (answ);
}

char	*sort_six_after_begin(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	int bsize;

	bsize = 2;
	while (bsize > 1)
	{
		bsize = ft_lstsize(*b);
		if (bsize == 1 || bsize == 0)
			break;
		zn = min_max_mid((*b)->content, *b, zn, bsize);
		answ = sort_six_second(zn, &(*a), &(*b), answ);
	}
	if (bsize > 0)
	{
		(*b)->flag = -1;
		answ = push(&(*b), &(*a), answ, 1);
		answ = rotate(&(*a), answ, 0);
	}
	return (answ);
}

char	*check_lower(t_list **a, char *answ)
{
	t_list *help;

	help = *a;
	while (help->next && (help->flag == (*a)->flag))
	{
		if (help->content > help->next->content)
			return (answ);
		help = help->next;
	}
	(*a)->flag = - 1;
	answ = rotate(&(*a), answ, 0);
	return	(answ);
}

