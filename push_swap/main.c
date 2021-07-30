#include "./includes/push_swap.h"

int	cust_atoi(char *str, t_list *a)
{
	int	answ;
	int	sign;

	sign = 1;
	answ = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		   || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		answ = answ * 10 + (*str - '0');
		str++;
	}
	if (*str != ' ' && *str != '\0')
		error_msg(a);
	return (answ * sign);
}

t_opelem	dup_finder(int num, t_list *st, t_opelem zn)
{
	t_list	*tmp;

	tmp = st;
	while (tmp->next)
	{
		if (num == tmp->content)
			error_msg(st);
		zn = min_max(zn, num);
		tmp = tmp->next;
	}
	if (num == tmp->content)
		error_msg(st);
	zn = min_max(zn, num);
	return (zn);
}

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
		ft_free(str, --j);
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
		{
			free_list(&a);
			return (0);
		}
		answ = sort_list(zn.size, &a, zn, &b);
		printf("%s", answ);
		//// CHECK
//		printf("%d SIZE\n", ft_lstsize(a));
//		while (a->next)
//		{
//			printf("%d and flag: %d\n", a->content, a->flag);
//			if (a->content > a->next->content)
//				printf("VERY BAD\n");
//			a = a->next;
//		}
//		printf("%d and flag: %d\n", a->content, a->flag);
		free_list(&a);
		//// END CHECK
	}
	return 0;
}
