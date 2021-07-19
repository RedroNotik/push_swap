//
// Created by Gaynell Hanh on 7/19/21.
//
#include "../includes/push_swap.h"

char *sort_six_plus(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	t_list *help;
	t_list *helpb;

	help = *a;
	helpb = *b;
	int i = 0;
	int j;
	int bsize = 1;

	while (i < zn.size)
	{
		if (help->content <= zn.mid)
		{
			help->flag = 1;
			answ = push(&(*a), &(*b), answ, 0);
		}
		i++;
	}
	i = 0;

	while (i < bsize)
	{
		bsize = ft_lstsize(*b);
		zn = min_max_mid((*b)->content, (*b), zn, bsize);
		j = 0;
		while (j < bsize)
		{
			if (help->content >= zn.mid)
			{
				help->flag = 1;
				answ = push(&(*b), &(*a), answ, 1);
			}
			j++;
		}
		while ((*b)->content != zn.min)
			answ = rotate(&(*b), answ, 1);
		answ = push(&(*b), &(*a), answ, 1);
		answ = rotate(&(*a), answ, 0);
		i++;
	}
	return (answ);

	//		while (i < zn.size)
//		{
//			if ((*a)->content <= zn.mid)
//			{
//				(*a)->flag = 1;
//				push(&a, &b);
//			}
//			else if (ft_lstsize(a) > 1)
//				answ = rotate(&a);
//			i++;
//		}
//		i = 0;
//		zn = min_max_dup(b->content, b, zn);
//		while (i < ft_lstsize(b))
//		{
//			if ((b->content > zn.mid) || (b->content == zn.min))
//			{
//				push(&b, &a);
//				if (a->content == zn.min)
//					a = rotate(a);
//			}
//			else if (ft_lstsize(b) > 1)
//				b = rotate(b);
//			i++;
//		}
//		i = 0;
//		zn.min = b->content;
//		zn.max = b->content;
//		zn = min_max_dup(b->content, b, zn);
//		while (i < ft_lstsize(b))
//		{
//			if ((b->content >= zn.mid) || (b->content == zn.min))
//			{
//				push(&b, &a);
//				if (a->content == zn.min)
//					a = rotate(a);
//			}
//			else if (ft_lstsize(b) > 1)
//				b = rotate(b);
//			i++;
//		}
//		push(&b, &a);
}

