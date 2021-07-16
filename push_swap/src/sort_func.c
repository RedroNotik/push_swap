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


char	*sort_list(int argc, t_list **a, t_opelem zn)
{
	t_list *b;
//	int 	i;
	t_list	*help;
	char	*answ;

	help = *a;
	answ = malloc(1);
	answ[0] = '\0';
	b = NULL;
//	i = 0;
	if (argc == 3)
		answ = two_elem(&help, answ, 0);
	else if (argc == 4)
		answ = three_elem(&help, answ, 0);
	else if (argc == 5)
		answ = four_elem(&help, &b, answ, zn.min);
	else if (argc == 6)
		answ = five_elem(&help, &b, answ, zn.min);
//	else
//	{
//		while (i < zn.size)
//		{
//			if ((*a)->content <= zn.mid)
//			{
//				(*a)->flag = 1;
//				push(&a, &b);
//			}
//			else if (ft_lstsize(a) > 1)
//				answ = rotate(&a);
//			i++;
//		}
//		i = 0;
//		zn = min_max_dup(b->content, b, zn);
//		while (i < ft_lstsize(b))
//		{
//			if ((b->content > zn.mid) || (b->content == zn.min))
//			{
//				push(&b, &a);
//				if (a->content == zn.min)
//					a = rotate(a);
//			}
//			else if (ft_lstsize(b) > 1)
//				b = rotate(b);
//			i++;
//		}
//		i = 0;
//		zn.min = b->content;
//		zn.max = b->content;
//		zn = min_max_dup(b->content, b, zn);
//		while (i < ft_lstsize(b))
//		{
//			if ((b->content >= zn.mid) || (b->content == zn.min))
//			{
//				push(&b, &a);
//				if (a->content == zn.min)
//					a = rotate(a);
//			}
//			else if (ft_lstsize(b) > 1)
//				b = rotate(b);
//			i++;
//		}
//		push(&b, &a);
	//}
	*a = help;
	return (answ);
	//// CHECK
//	while(a->next)
//	{
//		printf("%d ((\n", a->content);
//		a = a->next;
//	}
//	printf("%d ((\n", a->content);
	//// CHECK
	//push(&a, &b);
	//a = a->next;
	//a = a->next;
	//printf("%d -- A\n", a->content);
	//size = ft_lstsize(b);
	//printf("%d -- B %d\n", b->content, size);
//	size = ft_lstsize(a);
//	printf("%d -- A %d\n", a->content, size);
//	size = ft_lstsize(b);
//	printf("%d -- B %d\n", b->content, size);
	//// END CHECK
}
