#include "./includes/push_swap.h"

int	cust_atoi(char *str)
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
		error_msg();
	return (answ * sign);
}

t_opelem	dup_finder(int num, t_list *st, t_opelem zn)
{
	t_list	*tmp;

	tmp = st;
	while (tmp->next)
	{
		if (num == tmp->content)
			error_msg();
		zn = min_max(zn, num);
		tmp = tmp->next;
	}
	if (num == tmp->content)
		error_msg();
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
	b = cust_atoi(argv[1]);
	zn.max = b;
	zn.min = b;
	zn.size = 1;
	while (i < argc)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			b = cust_atoi(str[j]);
			if (help)
				zn = dup_finder(b, help, zn);
			ft_lstadd_back(&help, ft_lstnew(b));
			zn.size++;
			free(str[j]);
			j++;
		}
		i++;
	}
	zn.size--;
	zn.mid = (zn.max + zn.min) / 2;
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
			write(1, "OK\n", 3);
			return (0);
		}
		answ = sort_list(zn.size, &a, zn);
		printf("%sOK\n", answ);
		int b = 0;
		int i = 0;
		while (answ[i])
		{
			if (answ[i]== '\n')
				b++;
			i++;
		}
		printf("%d - COUNT\n", b);
		free(answ);
		//// CHECK
		while (a->next)
		{
			printf("%d\n", a->content);
			a = a->next;
		}
		printf("%d\n", a->content);
		//// END CHECK
	}
	return 0;
}
