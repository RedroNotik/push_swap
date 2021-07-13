/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 14:41:33 by ghanh             #+#    #+#             */
/*   Updated: 2021/04/20 10:52:45 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*tmp;
	unsigned char	*tmpdst;

	c1 = (unsigned char)c;
	i = 0;
	tmp = (unsigned char *)src;
	tmpdst = (unsigned char *)dst;
	while (i < n && tmp[i] != c1)
	{
		tmpdst[i] = tmp[i];
		dst++;
		i++;
	}
	if (i == n)
		return (NULL);
	tmpdst[i] = tmp[i];
	dst++;
	return (dst);
}
