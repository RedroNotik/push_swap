/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:08:03 by ghanh             #+#    #+#             */
/*   Updated: 2021/04/20 16:45:21 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*udst;
	unsigned char	*usrc;
	size_t			i;

	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (udst < usrc)
		while (i++ < len)
			*udst++ = *usrc++;
	else
	{
		udst += len;
		usrc += len;
		while (len--)
			*--udst = *--usrc;
	}
	return (dst);
}
