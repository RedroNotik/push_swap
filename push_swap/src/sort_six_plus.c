/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_six_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 05:25:43 by ghanh             #+#    #+#             */
/*   Updated: 2021/08/24 05:26:01 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		else if (ft_lstsize(*a) > 1)
			answ = rotate(&(*a), answ, 0);
	}
	return (answ);
}

char	*if_func(t_opelem *zn, t_list **a, t_list **b, char *answ)
{
	if ((*b)->content == zn->min && (*b)->next)
	{
		(*b)->flag = -1;
		answ = push(&(*b), &(*a), answ, 1);
		if ((*b)->content < zn->from)
			zn->min = min_l(&(*b));
		answ = rotate(&(*a), answ, 0);
	}
	else if ((*b)->content > zn->mid && ((*b)->content) != zn->min)
	{
		zn->from = (*b)->content;
		answ = push(&(*b), &(*a), answ, 1);
	}
	else if ((*b)->next)
		answ = rotate(&(*b), answ, 1);
	return (answ);
}

char	*sort_six_second(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	int	bsize;

	bsize = ft_lstsize(*b);
	zn.from = (*b)->content;
	zn.to = 0;
	while (zn.to < bsize)
	{
		(*b)->flag++;
		answ = if_func(&zn, &(*a), &(*b), answ);
		zn.to++;
	}
	return (answ);
}

char	*sort_six_after(t_opelem zn, t_list **a, t_list **b, char *answ)
{
	int	bsize;

	bsize = 2;
	while (bsize > 1)
	{
		bsize = ft_lstsize(*b);
		if (bsize == 1 || bsize == 0)
			break ;
		zn = min_max_mid((*b)->content, *b, zn, bsize);
		answ = sort_six_second(zn, &(*a), &(*b), answ);
	}
	if (bsize > 0)
	{
		answ = push(&(*b), &(*a), answ, 1);
	}
	return (answ);
}

char	*checking_two(t_opelem zn, t_list **a, t_list **b, char *ans)
{
	int	minnum;

	minnum = (*a)->content;
	while ((*a)->flag == zn.from)
	{
		if (!check_lower(&(*a), minnum, zn.from))
		{
			minnum = (*a)->content + 1;
			(*a)->flag = -1;
			if ((*b) && (*b)->next && (*b)->content != zn.min)
				ans = rrotate(&(*a), &(*b), ans);
			else
				ans = rotate(&(*a), ans, 0);
		}
		else if ((*a)->next && (*a)->next->flag == zn.from
			&& !check_lower(&((*a)->next), minnum, zn.from))
			ans = swap(&(*a), ans, 0);
		else if ((*a)->flag == zn.from)
		{
			if ((*a)->content < minnum)
				minnum = (*a)->content;
			ans = push(&(*a), &(*b), ans, 0);
		}
	}
	return (ans);
}
