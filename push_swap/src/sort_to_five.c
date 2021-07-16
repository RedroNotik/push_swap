//
// Created by Gaynell Hanh on 7/16/21.
//

#include "../includes/push_swap.h"


char	*two_elem(t_list ***a, char *answ, int b)
{
	if ((**a)->content > (**a)->next->content)
		answ = rotate((**a), answ, b);
	return (answ);
}

//
//char *three_elem(t_list ***a, char *answ)
//{
//	if ((**a)->content < (**a)->next->content
//		&& (**a)->next->content < (**a)->next->next->content)
//		return (answ);
//	else if ((**a)->content < (**a)->next->next->content
//			 && (**a)->next->content > (**a)->next->next->content)
//	{
//		answ = swap(&(**a));
//		answ = rotate(&(**a));
//	}
//	else if ((**a)->next->content < (**a)->content
//			 && (**a)->content < (**a)->next->next->content)
//		answ = swap(&(**a));
//	else if ((**a)->next->content < (**a)->next->next->content
//			 && (**a)->content > (**a)->next->next->content)
//		answ =	rotate(&(**a));
//	else if ((**a)->next->next->content < (**a)->content
//		&& (**a)->content < (**a)->next->content)
//		answ = r_rotate(&(**a));
//	else if ((**a)->next->next->content < (**a)->next->content
//			 && (**a)->content > (**a)->next->content)
//	{
//		answ = swap(&(**a));
//		answ = r_rotate(&(**a));
//	}
//	return (a);
//}

//t_list *four_elem(t_list ***a, int min)
//{
//	t_list *b;
//
//	b = NULL;
//	while (a->content != min)
//		a = rotate(a);
//	push(&a, &b);
//	a = three_elem(a);
//	push(&b, &a);
//	return (a);
//}
//
//t_list *five_elem(t_list ***a, int min)
//{
//	t_list *b;
//	t_list *help;
//
//	b = NULL;
//	while (a->content != min)
//		a = rotate(a);
//	push(&a, &b);
//	min = a->content;
//	help = a;
//	while (help->next)
//	{
//		if (help->content < min)
//			min = help->content;
//		help = help->next;
//	}
//	if (help->content < min)
//		min = help->content;
//	a = four_elem(a, min);
//	push(&b, &a);
//	return (a);
//}