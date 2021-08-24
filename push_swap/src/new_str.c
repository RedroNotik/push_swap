/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 03:02:00 by ghanh             #+#    #+#             */
/*   Updated: 2021/08/24 03:02:28 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Gaynell Hanh on 7/16/21.
//
#include "../includes/push_swap.h"

char	*new_str(char *old, char *add)
{
	char	*new;

	if (old)
	{
		new = ft_strjoin(old, add);
		free(old);
		return (new);
	}
	return (NULL);
}
