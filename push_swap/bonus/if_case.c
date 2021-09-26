//
// Created by Gaynell Hanh on 8/24/21.
//

#include "../includes/push_swap.h"

void	swap_two(t_list **a, t_list **b)
{
	swap(&(*a), NULL, 2);
	swap(&(*b), NULL, 2);
}

void	rotate_two(t_list **a, t_list **b)
{
	rotate(&(*a), NULL, 2);
	rotate(&(*b), NULL, 2);
}

void	r_rotate_two(t_list **a, t_list **b)
{
	r_rotate(&(*a), NULL, 2);
	r_rotate(&(*b), NULL, 2);
}

int	if_case(char *line, t_list **a, t_list **b)
{
	if (!ft_strncmp("pa", line, 3))
		push(&(*b), &(*a), NULL, 2);
	else if (!ft_strncmp("pb", line, 3))
		push(&(*a), &(*b), NULL, 2);
	else if (!ft_strncmp("sa", line, 3))
		swap(&(*a), NULL, 2);
	else if (!ft_strncmp("sb", line, 3))
		swap(&(*b), NULL, 2);
	else if (!ft_strncmp("ss", line, 3))
		swap_two(&(*a), &(*b));
	else if (!ft_strncmp("ra", line, 3))
		rotate(&(*a), NULL, 2);
	else if (!ft_strncmp("rb", line, 3))
		rotate(&(*b), NULL, 2);
	else if (!ft_strncmp("rr", line, 3))
		rotate_two(&(*a), &(*b));
	else if (!ft_strncmp("rra", line, 4))
		r_rotate(&(*a), NULL, 2);
	else if (!ft_strncmp("rrb", line, 4))
		r_rotate(&(*b), NULL, 2);
	else if (!ft_strncmp("rrr", line, 4))
		r_rotate_two(&(*a), &(*b));
	else if (line[0] != '\0')
		error_a_b(*a, *b, 1);
	return (1);
}
