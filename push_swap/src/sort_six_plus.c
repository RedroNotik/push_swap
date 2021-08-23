//////
////// Created by Gaynell Hanh on 7/19/21.
//////
//
//#include "../includes/push_swap.h"
//
//char *set_flags(t_opelem zn, t_list **a, t_list **b, char *answ)
//{
//	int i;
//
//	i = 0;
//
//	while (i < zn.size && (*b)!= NULL)
//	{
//		if ((*b)->content == zn.min)
//		{
//			(*b)->flag = -1;
//			answ = push(&(*b), &(*a), answ, 1);
//			answ = rotate(&(*a), answ, 0);
//			if ((*b)->next)
//				zn.min = min_l(&(*b));
//		}
//		else if ((*b)->next && (*b)->next->content == zn.min)
//		{
//			answ = swap(&(*b), answ, 1);
//			i--;
//		}
//		else if ((*b)->content > zn.mid)
//		{
//			answ = push(&(*b), &(*a), answ, 1);
//		}
//		else
//		{
//			i++;
//			if ((*b)->next)
//				answ = rotate(&(*b), answ, 1);
//		}
//	}
//	return (answ);
//}
//
//
//char *making_flags(t_opelem zn, t_list **a, t_list **b, char *answ)
//{
//	t_list *help;
//
//	zn.size = 1;
//	while (zn.size >= 1)
//	{
//		zn.size = ft_lstsize(*b);
//		help = *b;
//		while (help != NULL)
//		{
//			help->flag++;
//			help = help->next;
//		}
//		if (zn.size == 1)
//		{
//			answ = push(&(*b), &(*a), answ, 1);
//			break;
//		}
//		else if (zn.size == 0)
//			break ;
//		zn = min_max_mid((*b)->content, *b, zn, zn.size);
//		answ = set_flags(zn, &(*a), &(*b), answ);
//	}
//	return (answ);
//}
//
