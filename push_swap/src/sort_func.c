//
// Created by Gaynell Hanh on 7/13/21.
//

#include "../includes/push_swap.h"

int	min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

char	*sort_list(int size, t_list **a, t_opelem zn)
{
	t_list	*b;
	t_list	*help;
	char	*answ;
	int		minzn;

	minzn = zn.min;
	help = *a;
	answ = malloc(1);
	answ[0] = '\0';
	b = NULL;
	if (size < 6)
		answ = sort_five(zn.size, answ, &help, zn.min);
	else
	{
		if (help->content == zn.min)
		{
			answ = rotate(&help, answ, 0);
			zn.size--;
		}
		while (help->content != minzn)
		{
			answ = sort_six_plus(zn, &help, &b, answ);
			b = help;
			zn.size = 0;
			while (b->content != minzn)
			{
				b = b->next;
				zn.size++;
			}
			b = NULL;
			zn = min_max_mid(help->content, help, zn, zn.size);
		}
	}
	*a = help;
	return (answ);
}
