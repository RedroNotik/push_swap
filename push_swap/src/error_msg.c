//
// Created by Gaynell Hanh on 7/13/21.
//
#include "../includes/push_swap.h"

void	end_without_error(t_list *a)
{
	free_list(&a);
	exit(0);
}

void	error_msg(t_list *a)
{
	free_list(&a);
	ft_putstr_fd("Error\n", 6, 2);
	exit(0);
}
