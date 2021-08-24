/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 03:02:10 by ghanh             #+#    #+#             */
/*   Updated: 2021/08/24 03:02:11 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Gaynell Hanh on 7/16/21.
//
#include "../includes/push_swap.h"

int	min_l(t_list **a)
{
	int		minnumb;
	t_list	*helpl;

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

int	check_lower(t_list **a, int minnum, int flag)
{
	t_list	*help;

	help = *a;
	if (help->content > minnum)
		return (1);
	while (help->next && help->flag == flag && help->next->flag == flag)
	{
		if ((*a)->content > help->next->content)
			return (1);
		help = help->next;
	}
	return (0);
}
