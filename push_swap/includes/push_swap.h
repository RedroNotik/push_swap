//
// Created by Gaynell Hanh on 6/28/21.
//

#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

# ifndef ARG
#  define ARG ""
# endif

typedef struct 	opelem
{
	int	size;
	int	max;
	int min;
	int mid;
}	t_opelem;

void error_msg();

char *new_str(char *old, char *add);

char *push(t_list **from, t_list **to, char *str, int b);
char *rotate(t_list **st, char *str, int b);
char *r_rotate(t_list **st, char *str, int b);
char *swap(t_list **st, char *str, int b);

char	*two_elem(t_list **a, char *answ, int b);
char	*three_elem(t_list **a, char *answ, int b);
char *four_elem(t_list **a, t_list ** b, char *answ, int min);
char *five_elem(t_list **a, t_list **b, char *answ, int min);



t_opelem min_max_dup(int num, t_list *st, t_opelem zn);
t_opelem min_max(t_opelem zn, int num);
char	*sort_list(int argc, t_list **a, t_opelem zn);

#endif //PUSH_SWAP_PUSH_SWAP_H
