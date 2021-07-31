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

char 	*main_sort(t_list **a, t_list **b, t_opelem zn, char *answ)
{
	int minnum = (*a)->content;
	int h = (*a)->flag;
	while ((*a)->next && (*a)->flag == h)
	{
		if (check_lower(&(*a), minnum, h) && (!(check_lower(&((*a)->next), minnum, h)) && (*a)->next->flag == h))
		{
			answ = swap(&(*a), answ, 0);
			(*a)->flag = -1;
			answ = rotate(&(*a), answ, 0);
		}
		else if (!check_lower(&(*a), minnum, h))
		{
			(*a)->flag = -1;
			answ = rotate(&(*a), answ, 0);
		}
		else
		{
			if ((*a)->content < minnum)
				minnum = (*a)->content;
			answ = push(&(*a), &(*b), answ, 0);
		}
	}
	if ((*a)->flag == h)
	{
		(*a)->flag = -1;
		answ = rotate(&(*a), answ, 0);
	}
	else{
		if (ft_lstsize(*b) < 4)
		{
			answ = sort_five(ft_lstsize(*b), answ, &(*b), 1);
			while (ft_lstsize(*b) != 0)
			{
				(*b)->flag = -1;
				answ = push(&(*b), &(*a), answ, 1);
				answ = rotate(&(*a), answ, 0);
			}
		}
		else
			answ = sort_six_after_begin(zn, &(*a), &(*b), answ);
	}
	return (answ);
}

char	*sort_list(int size, t_list **a, t_opelem zn, t_list **b)
{
	char	*answ;
	t_list	*help;
	answ = malloc(1);
	answ[0] = '\0';
	if (size < 6)
		answ = sort_five(zn.size, answ, &(*a), 0);
	else
	{
		answ = sort_six_swap(zn, &(*a), &(*b), answ);
		answ = sort_six_after_begin(zn, &(*a), &(*b), answ); // After this func i have massive with sorted end And usorted top
		while ((*a)->flag != 0)
			answ = main_sort(&(*a), &(*b), zn, answ);
		help = *a;
		zn.size = 0;
		while (help->flag == 0)
		{
			zn.size++;
			help = help->next;
		}
		zn = min_max_mid((*a)->content, *a, zn, zn.size);
		answ = sort_six_swap(zn, &(*a), &(*b), answ);
		help = *a;
		zn.size = 0;
		while (help->next)
		{
			help = help->next;
			if (help->flag == 0)
				zn.size++;
		}
		while (zn.size-- > 0)
		{
			if ((*b)->content != zn.min)
			{
				r_rotate(&(*b), NULL, 1);
				r_rotate(&(*a), NULL, 1);
				answ = new_str(answ, "rrr\n");
			}
			else
				answ = r_rotate(&(*a), answ, 0);
		}
		answ = sort_six_after_begin(zn, &(*a), &(*b), answ);
		while ((*a)->flag != -1)
			answ = main_sort(&(*a), &(*b), zn, answ);
	}
	return (answ);
}
