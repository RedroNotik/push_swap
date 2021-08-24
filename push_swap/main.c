#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;
	t_opelem	zn;
	char		*answ;

	if (argc == 1)
		exit(1);
	else if (argc >= 2)
	{
		zn = parsing(argc, argv, &a);
		if (zn.size == -1)
			end_without_error(a);
		if (!set_order(&a, zn.size))
			end_without_error(a);
		answ = sort_list(zn.size, &a, zn, &b);
	//	free_list(&a);
		//ft_putstr_fd(answ, ft_strlen(answ), 1);
		printf("%d - SIZE\n", ft_lstsize(a));
		while (a->next)
		{
			printf("a->content: %d a->flag: %d\n", a->content, a->flag);
			if (a->content > a->next->content)
				printf ("VERY BAD\n");
			a = a->next;
		}
		printf("a->content: %d a->flag: %d\n", a->content, a->flag);
		free(answ);
	}
	return (0);
}
