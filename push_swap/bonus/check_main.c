//
// Created by Gaynell Hanh on 7/28/21.
//

#include "../includes/push_swap.h"

void	error_a_b(t_list *a, t_list *b, int flag)
{
	free_list(&a);
	free_list(&b);
	if (flag == 1)
		ft_putstr_fd("Error\n", 6, 2);
	else if (flag == 2)
		ft_putstr_fd("KO\n", 3, 1);
	exit(0);
}

int	reading(t_list **a, t_list **b)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		if_case(line, &(*a), &(*b));
		free(line);
	}
	if_case(line, &(*a), &(*b));
	free(line);
	return (0);
}

void	check_sort(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			error_a_b(a, NULL, 2);
	}
}

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;
	t_opelem	zn;

	b = NULL;
	if (argc == 1)
		exit(1);
	else if (argc >= 2)
	{
		zn = parsing(argc, argv, &a);
		zn.to = ft_lstsize(a);
		reading(&a, &b);
		if (ft_lstsize(b) != 0 || ft_lstsize(a) != zn.to)
			error_a_b(a, b, 2);
		check_sort(a);
		free_list(&a);
		ft_putstr_fd("OK\n", 3, 1);
	}
	return (0);
}
