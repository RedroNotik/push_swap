//
// Created by Gaynell Hanh on 7/19/21.
//
#include "../includes/push_swap.h"


char 	*sort_five(int size, char *answ, t_list **a, int min)
{
	t_list	*b;
	t_list	*help;

	help = *a;
	b = NULL;

	if (size == 2)
		answ = two_elem(&help, answ, 0);
	else if (size == 3)
		answ = three_elem(&help, answ, 0);
	else if (size == 4)
		answ = four_elem(&help, &b, answ, min);
	else if (size == 5)
		answ = five_elem(&help, &b, answ, min);
	*a = help;
	return (answ);
}

char	*sort_six_plus(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	t_list	*help;

	help = *a;
	int i = 0;
	int j = 0;
	int bsize = 1;

	while (i < zn.size)
	{
		if (help->content <= zn.mid)
		{
			if (j < zn.size / 2)
			{
				while (j > 0)
				{
					answ = r_rotate(&(*a), answ, 0);
					j--;
				}
			}
			else
			{
				while (j > 0)
				{
					answ = rotate(&(*a), answ, 0);
					j--;
				}
			}
			(*a)->flag = 1;
			answ = push(&(*a), &(*b), answ, 0);
		}
		else
		{
			j++;
			help = help->next;
			//answ = rotate(&(*a), answ, 0);
		}
		i++;
	}
//	while (j-- > 0)
//		answ = r_rotate(&(*a), answ, 0);
//	if (ft_lstsize(*a) < 6)
//		answ = sort_five(ft_lstsize(*a), answ, &(*a), min_l(*a));
	if (ft_lstsize(*a) < 6)
	{
		answ = sort_five(ft_lstsize(*a), answ, &(*a), min_l(*a));
		j += ft_lstsize(*a);
	}
	i = 0;
	while (i < bsize)
	{
		bsize = ft_lstsize(*b);
		zn = min_max_mid((*b)->content, (*b), zn, bsize);
		j = 0;
		while (j < bsize)
		{
			if ((*b)->content > zn.mid)
			{
				(*b)->flag = 1;
				answ = push(&(*b), &(*a), answ, 1);
			}
			else if ((*b)->next)
				answ = rotate(&(*b), answ, 0);
			j++;
		}
		i++;
	}
	while ((*b)->content != zn.min && (*b)->next)
		answ = rotate(&(*b), answ, 1);
	answ = push(&(*b), &(*a), answ, 1);
//	if (ft_lstsize(*a) < 6)
//	{
//		answ = sort_five(ft_lstsize(*a), answ, &(*a), min_l(*a));
//		i += ft_lstsize(*a);
//	}
	int f = i + j;
	while (f-- > 0)
		answ = rotate(&(*a), answ, 0);
	return (answ);
}
