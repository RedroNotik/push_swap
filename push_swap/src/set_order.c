/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_order.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 03:01:03 by ghanh             #+#    #+#             */
/*   Updated: 2021/08/24 03:02:23 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Gaynell Hanh on 8/24/21.
//

#include "../includes/push_swap.h"

static int	*sort_mas(int *mas, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (mas[i] < mas[j])
			{
				tmp = mas[i];
				mas[i] = mas[j];
				mas[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (mas);
}

static int	*setting_mas(int *mas, t_list **a)
{
	t_list	*help;
	int		i;

	i = 0;
	help = *a;
	while (help != NULL)
	{
		mas[i] = help->content;
		help = help->next;
		i++;
	}
	return (mas);
}

int	set_order(t_list **a, int size)
{
	int		*mas;
	t_list	*help;
	int		i;

	mas = malloc(sizeof(int *) * size);
	if (!mas)
		return (0);
	mas = setting_mas(mas, &(*a));
	mas = sort_mas(mas, size);
	help = *a;
	while (help != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (help->content == mas[i++])
			{
				help->content = i;
				break ;
			}
		}
		help = help->next;
	}
	free(mas);
	return (1);
}
