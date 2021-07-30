//
// Created by Gaynell Hanh on 7/28/21.
//

#include "../includes/push_swap.h"

t_opelem	parsing(int argc, char **argv, t_list **st)
{
	t_list		*help;
	t_opelem	zn;
	int			b;
	int			i;
	int			j;
	char		**str;

	i = 1;
	help = *st;
	b = cust_atoi(argv[1], help);
	zn.max = b;
	zn.min = b;
	zn.size = 1;
	while (i < argc)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			b = cust_atoi(str[j], help);
			if (help)
				zn = dup_finder(b, help, zn);
			ft_lstadd_back(&help, ft_lstnew(b));
			zn.size++;
			j++;
		}
		ft_free(str, j);
		i++;
	}
	zn.size--;
	zn.mid = zn.max / 2 + zn.min;
	*st = help;
	while (help->next)
	{
		if (help->content < help->next->content)
			help = help->next;
		else
			return (zn);
	}
	zn.size = -1;
	return (zn);
}


int main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;
	t_opelem	zn;
	if (argc == 1)
		exit(1);
	else if (argc >= 2)
	{
		zn = parsing(argc, argv, &a);
		if (zn.size == -1)
		{
			free_list(&a);
			write(1, "OK\n", 3);
			return (0);
		}

}