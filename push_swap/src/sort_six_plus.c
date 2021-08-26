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
		if ((*b)->next && (*b)->content != zn->min && (*b)->content < zn->mid
			&& (zn->to + 1) < zn->size)
		{
			(*b)->flag++;
			zn->to++;
			answ = rrotate(&(*a), &(*b), answ);
		}
		else
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
	zn.size = ft_lstsize(*b);
	zn.from = (*b)->content;
	zn.to = 0;
	while (zn.to < zn.size)
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
		if ((*a)->content == zn.min)
		{
			(*a)->flag = -1;
			answ = rotate(&(*a), answ, 0);
		}
	}
	return (answ);
}

char	*checking_two(t_opelem zn, t_list **a, t_list **b, char *ans)
{
	zn.to = (*a)->content;
	while ((*a)->flag == zn.from)
	{
		if (!check_lower(&(*a), (*a)->content, zn.to, zn.from))
			ans = help_func1(&zn, &(*a), &(*b), ans);
		else if ((*b) && (*b)->content == zn.to
			&& !check_lower(&(*a), (*b)->content, (*b)->content, zn.from))
			ans = help_func2(&zn, &(*a), &(*b), ans);
		else if ((*a)->next && (*a)->next->flag == zn.from
			&& !check_lower(&((*a)->next), (*a)->next->content, zn.to, zn.from))
			ans = swap(&(*a), ans, 0);
		else if ((*a)->flag == zn.from)
		{
			if ((*a)->content < zn.to)
				zn.to = (*a)->content;
			ans = push(&(*a), &(*b), ans, 0);
		}
	}
	return (ans);
}
