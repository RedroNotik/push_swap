//
// Created by Gaynell Hanh on 8/24/21.
//

#include "../includes/push_swap.h"

static int	check_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i > 10)
		return (1);
	return (0);
}

static int	cust_atoi(char *str, t_list *a)
{
	long long int	answ;
	int				sign;

	sign = 1;
	answ = 0;
	if (*str != '+' && *str != '-' && (*str < '0' || *str > '9'))
		error_msg(a);
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	if (!(*str >= '0' && *str <= '9') || check_lenght(str))
		error_msg(a);
	while (*str >= '0' && *str <= '9')
	{
		answ = answ * 10 + (*str - '0');
		str++;
	}
	if ((*str != ' ' && *str != '\0') || (answ > INT_MAX || answ < INT_MIN))
		error_msg(a);
	return (answ * sign);
}

static t_opelem	dup_finder(int num, t_list *st, t_opelem zn)
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

t_opelem	setting_struct(int argc, char **argv, t_list **st, t_opelem zn)
{
	int		i;
	int		j;
	char	**str;
	int		b;

	i = 1;
	while (i < argc)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			b = cust_atoi(str[j], *st);
			if (*st)
				zn = dup_finder(b, *st, zn);
			ft_lstadd_back(&(*st), ft_lstnew(b));
			zn.size++;
			j++;
		}
		ft_free(str, j);
		i++;
	}
	return (zn);
}

t_opelem	parsing(int argc, char **argv, t_list **st)
{
	t_list		*help;
	t_opelem	zn;
	int			b;

	help = *st;
	b = cust_atoi(argv[1], help);
	zn.max = b;
	zn.min = b;
	zn.size = 1;
	zn = setting_struct(argc, argv, &help, zn);
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
