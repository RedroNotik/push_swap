//
// Created by Gaynell Hanh on 7/16/21.
//
#include "../includes/push_swap.h"

t_opelem	min_max(t_opelem zn, int num)
{
	if (num >= zn.max)
		zn.max = num;
	if (num <= zn.min)
		zn.min = num;
	return (zn);
}

t_opelem	min_max_mid(int num, t_list *st, t_opelem zn, int len)
{
	t_list	*tmp;
	int		i;

	zn.max = num;
	zn.min = num;
	i = 0;
	tmp = st;
	while (i < len)
	{
		zn = min_max(zn, tmp->content);
		tmp = tmp->next;
		i++;
	}
	zn = min_max(zn, num);
	zn.mid = (zn.max + zn.min) / 2;
	return (zn);
}
