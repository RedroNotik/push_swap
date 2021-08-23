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

char	*sort_five(int size, char *answ, t_list **a, int flag)
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

char	*main_sort(t_list **a, t_list **b, t_opelem zn, char *answ)
{
	zn.from = (*a)->flag;
	answ = checking_two(zn, &(*a), &(*b), answ);
	if (ft_lstsize(*b) < 6)
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
		answ = sort_six_after(zn, &(*a), &(*b), answ);
	return (answ);
}

char	*sort_list(int size, t_list **a, t_opelem zn, t_list **b)
{
	char	*answ;

	answ = malloc(1);
	answ[0] = '\0';
	if (size < 6)
		answ = sort_five(zn.size, answ, &(*a), 0);
	else
	{
		answ = sort_six_swap(zn, &(*a), &(*b), answ);
		answ = sort_six_after(zn, &(*a), &(*b), answ);
		while ((*a)->flag != -1)
			answ = main_sort(&(*a), &(*b), zn, answ);
	}
	return (answ);
}
