/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 03:01:43 by ghanh             #+#    #+#             */
/*   Updated: 2021/08/24 03:01:45 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Gaynell Hanh on 7/19/21.
//
#include "../includes/push_swap.h"

void	free_list(t_list **a)
{
	t_list	*help;

	while (*a)
	{
		help = (*a)->next;
		free(*a);
		*a = help;
	}
}
