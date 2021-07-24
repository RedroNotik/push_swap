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
	if (size == 2)
		answ = two_elem(&help, answ, 0);
	else if (size == 3)
		answ = three_elem(&help, answ, 0);
	else if (size == 4)
		answ = four_elem(&help, &b, answ, zn.min);
	else if (size == 5)
		answ = five_elem(&help, &b, answ, zn.min);
	else
	{
		//// OLD
//		if (help->content == zn.min)
//		{
//			answ = rotate(&help, answ, 0);
//			zn.size--;
//		}
//		while (help->content != minzn)
//		{
//			answ = sort_six_plus(zn, &help, &b, answ);
//			b = help;
//			zn.size = 0;
//			while (b->content != minzn)
//			{
//				b = b->next;
//				zn.size++;
//			}
//			b = NULL;
//			zn = min_max_mid(help->content, help, zn, zn.size);
//		}
//// END OLD
	answ = sort_six_swap(zn, &(*a), &b, answ);
	answ = sort_six_after_begin(zn, &(*a), &b, answ); // After this func i have massive with sorted end And usorted top
	while ((*a)->flag != -1)
	{
		answ = check_lower(&(*a), answ); // SHOUD BE IN WHILE
		help = *a;
		while (help->next && (help->flag == help->next->flag))
		{
			help = help->next;
			answ = push(&(*a), &b, answ, 0);
		}
		if (help->content == (*a)->content)
		{
			help = help->next;
			answ = push(&(*a), &b, answ, 0);
		}
	//	printf("%d - Bsize\n", ft_lstsize(b));
		answ = sort_six_after_begin(zn, &(*a), &b, answ);
	}
	}
	//*a = help;
	return (answ);
}
