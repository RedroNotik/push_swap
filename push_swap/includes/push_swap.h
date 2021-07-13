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

void error_msg();

void	push(t_list **a, t_list **b);
t_list *rotate(t_list *st);
t_list *r_rotate(t_list *st);
t_list *swap(t_list *st);

typedef struct 	opelem
{
	int	size;
	int	max;
	int min;
}	t_opelem;

void sort_list(t_list *a, int op_elem, int size);

#endif //PUSH_SWAP_PUSH_SWAP_H
