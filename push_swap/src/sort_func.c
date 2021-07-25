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

char 	*sort_five(int size, char *answ, t_list **a, int flag)
{
	t_list	*b;
	t_list	*help;

	help = *a;
	b = NULL;

	if (size == 2)
		answ = two_elem(&help, answ, flag);
	else if (size == 3)
		answ = three_elem(&help, answ, flag);
	else if (size == 4)
		answ = four_elem(&help, &b, answ, flag);
	else if (size == 5)
		answ = five_elem(&help, &b, answ, flag);
	*a = help;
	return (answ);
}

char	*sort_list(int size, t_list **a, t_opelem zn)
{
	t_list	*b;
	char	*answ;
	t_list	*help;

	answ = malloc(1);
	answ[0] = '\0';
	b = NULL;
	if (size < 6)
		answ = sort_five(zn.size, answ, &(*a), 0);
	else
	{
//		if (help->content == zn.min)
//		{
//<<<<<<< HEAD
//			answ = swap(&help, answ, 0);
////			zn.size--;
//=======
//			answ = rotate(&help, answ, 0);
//			zn.size--;
//>>>>>>> f8e5a5fe1fafe4732931fe06e7b25d2727a8e280
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
				answ = check_lower(&(*a), answ);
			}
			if (help->flag == (*a)->flag)
			{
				help = help->next;
				(*a)->flag = -1;
				answ = rotate(&(*a), answ, 0);
			//	answ = push(&(*a), &b, answ, 0);
			//	answ = new_str(answ, "checked&&&\n");
			}
//			if (ft_lstsize(b) < 6 && ft_lstsize(b) != 0)
//			{
//				answ = sort_five(ft_lstsize(b), answ, &b, 1);
//				while (ft_lstsize(b) > 1)
//				{
//					b->flag = -1;
//					answ = push(&b, &(*a), answ, 1);
//					answ = rotate(&(*a), answ, 0);
//				}
//				b->flag = -1;
//				answ = push(&b, &(*a), answ, 1);
//				answ = rotate(&(*a), answ, 0);
//			}
//			else
				answ = sort_six_after_begin(zn, &(*a), &b, answ);
		}
	}
//	*a = help;
	return (answ);
}
