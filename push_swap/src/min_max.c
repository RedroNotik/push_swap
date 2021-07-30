//
// Created by Gaynell Hanh on 7/16/21.
//
#include "../includes/push_swap.h"


int 	find_min(t_list *b, int min)
{
	t_list *help;
	int		bsize;
	int 	i;

	help = b;
	i = 0;
	bsize = ft_lstsize(help);
	while (help->next)
	{
		if (help->content == min)
			break;
		help = help->next;
		i++;
	}
	if (i <= (bsize / 2))
		return (1);
	else
		return (0);
}

int			min_l(t_list **a)
{
	int		minnumb;
	t_list *helpl;

	minnumb = (*a)->content;
	helpl = *a;
	while (helpl->next)
	{
		if (minnumb > helpl->content)
			minnumb = helpl->content;
		helpl = helpl->next;
	}
	if (minnumb > helpl->content)
		minnumb = helpl->content;
	return (minnumb);
}

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
	zn.mid = ((zn.max - zn.min) / 2) + zn.min;
	return (zn);
}
