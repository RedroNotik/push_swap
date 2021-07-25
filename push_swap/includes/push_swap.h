//
// Created by Gaynell Hanh on 6/28/21.
//

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_opelem
{
	int	size;
	int	max;
	int	min;
	int	mid;
}	t_opelem;

void	ft_free(char **arr, size_t i);
int			min_l(t_list *a);
void		error_msg(t_list *a);
void		free_list(t_list **a);
char		*new_str(char *old, char *add);
char		*push(t_list **from, t_list **to, char *str, int b);
char		*rotate(t_list **st, char *str, int b);
char		*r_rotate(t_list **st, char *str, int b);
char		*swap(t_list **st, char *str, int b);
char		*two_elem(t_list **a, char *answ, int b);
char		*three_elem(t_list **a, char *answ, int b);
char		*four_elem(t_list **a, t_list **b, char *answ, int flag);
char		*five_elem(t_list **a, t_list **b, char *answ, int flag);
char		*sort_six_plus(t_opelem zn, t_list **a, t_list **b, char *answ);
char		*sort_list(int size, t_list **a, t_opelem zn);
char 		*sort_five(int size, char *answ, t_list **a, int flag);
t_opelem	min_max_mid(int num, t_list *st, t_opelem zn, int len);
t_opelem	min_max(t_opelem zn, int num);

//// NEW SORT
char	*sort_six_after_begin(t_opelem zn, t_list **a, t_list **b, char *answ);
char	*sort_six_second(t_opelem zn, t_list **a, t_list **b, char *answ);
char	*sort_six_swap(t_opelem zn, t_list **a, t_list **b, char *answ);
char	*check_lower(t_list **a, char *answ);
////
#endif //PUSH_SWAP_PUSH_SWAP_H
