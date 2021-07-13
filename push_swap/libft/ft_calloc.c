/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:17:03 by ghanh             #+#    #+#             */
/*   Updated: 2021/04/20 11:49:55 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	i;
	size_t	len;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	len = count * size;
	tmp = (void *)malloc(len);
	if (!(tmp))
		return (NULL);
	i = 0;
	while (i < len)
	{
		((unsigned char *)tmp)[i] = '\0';
		i++;
	}
	return (tmp);
}
