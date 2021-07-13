/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:28:47 by ghanh             #+#    #+#             */
/*   Updated: 2021/04/20 10:59:35 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*help;
	int		check;

	check = 0;
	tmp = (char *)s;
	while (*tmp != '\0')
	{
		if (*tmp == c)
		{
			help = tmp;
			check = 1;
		}
		tmp++;
	}
	if (c == '\0')
		return (tmp);
	if (check != 0)
		return (help);
	return (NULL);
}
