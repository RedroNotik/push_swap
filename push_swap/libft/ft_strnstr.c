/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:30:08 by ghanh             #+#    #+#             */
/*   Updated: 2021/04/20 11:10:42 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;
	char	*str1;

	str1 = (char *)str;
	j = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str1);
	while (i < len)
	{
		j = 0;
		while (str1[i + j] == to_find[j] && str1[i] != '\0')
		{	
			if (i + j > len)
				return (0);
			if (to_find[j + 1] == '\0')
				return (&str1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
