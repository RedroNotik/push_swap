/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 13:15:27 by ghanh             #+#    #+#             */
/*   Updated: 2021/04/20 10:55:04 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			i;

	i = 0;
	us1 = (unsigned char *) s1;
	us2 = (unsigned char *) s2;
	while (i < n)
	{
		if (us1[i] > us2[i])
			return (us1[i] - us2[i]);
		else if (us1[i] < us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (us1[i - 1] - us2[i - 1]);
}
