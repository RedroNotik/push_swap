////
//// Created by Gaynell Hanh on 7/19/21.
////

#include "../includes/push_swap.h"

char *set_flags(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	int i;

	i = 0;

	while (i < zn.size)
	{
		if ((*b)->content == zn.min && (*b)->next)
		{
			(*b)->flag = -1;
			answ = push(&(*b), &(*a), answ, 1);
			answ = rotate(&(*a), answ, 0);
			if ((*b)->next)
			{
				zn.min = min_l(&(*b));
			}
		}
		else if ((*b)->next && (*b)->next->content == zn.min)
		{
			answ = swap(&(*b), answ, 1);
			i--;
		}
		else if ((*b)->content > zn.mid)
		{
			answ = push(&(*b), &(*a), answ, 1);
			//i++;
		}
		else
		{
			i++;
			if ((*b)->next)
				answ = rotate(&(*b), answ, 1);
		}
	}
	return (answ);
}


char *making_flags(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	t_list *help;

	zn.size = 1;
	while (zn.size >= 1)
	{
		zn.size = ft_lstsize(*b);
		help = *b;
		while (help != NULL)
		{
			help->flag++;
			help = help->next;
		}
		if (zn.size == 1)
		{
			(*b)->flag = -1;
			answ = push(&(*b), &(*a), answ, 1);
			answ = rotate(&(*a), answ, 0);
			break;
		}
		zn = min_max_mid((*b)->content, *b, zn, zn.size);
		answ = set_flags(zn, &(*a), &(*b), answ);
	}
	return (answ);
}

char *checking_two_first_elem(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	int flag;
	int minnum;

	minnum = (*a)->content;
	flag = (*a)->flag;
	while ((*a)->flag == flag)
	{
		if (!check_lower(&(*a), minnum, flag))
		{
			(*a)->flag = -1;
			answ = rotate(&(*a), answ, 0);
		}
		else if ((*a)->next && (*a)->next->flag == flag &&!check_lower(&((*a)->next), minnum, flag))
			answ = swap(&(*a), answ, 0);
		else if ((*a)->flag == flag)
		{
			if ((*a)->content < minnum)
				minnum = (*a)->content;
			answ = push(&(*a), &(*b), answ, 0);
		}
	}
	return (answ);
}
