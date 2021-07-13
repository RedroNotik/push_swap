/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:34:25 by ghanh             #+#    #+#             */
/*   Updated: 2021/04/20 10:58:12 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s11[i] != '\0' && s22[i] != '\0')
	{
		if (s11[i] > s22[i])
			return (s11[i] - s22[i]);
		else if (s11[i] < s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	if (i != 0 && i == n)
		return (s11[i - 1] - s22[i - 1]);
	return (s11[i] - s22[i]);
}
