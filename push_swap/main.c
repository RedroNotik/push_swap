#include "./includes/push_swap.h"


//static void	ft_free(char **arr, size_t i)
//{
//	while (i)
//		free(arr[i--]);
//	free(arr);
//}
//
//char	*ft_strdup_castom(char *s1)
//{
//	char	*s2;
//	size_t	i;
//	size_t	j;
//
//	j = ft_strlen(s1);
//	i = 0;
//	while (i < j)
//	{
//		if (!ft_isdigit(s1[i]))
//			return (NULL);
//		i++;
//	}
//	i = 0;
//	s2 = (char *)malloc(j + 1);
//	if (!s2)
//		return (NULL);
//	while (i < j)
//	{
//		s2[i] = s1[i];
//		i++;
//	}
//	s2[i] = '\0';
//	return (s2);
//}
//
//char	**parsing(int argc, char **argv)
//{
//	int		i;
//	char	**a;
//
//	i = 0;
//	a = (char **)malloc(sizeof(char **) * (argc));
//	if (!a)
//		error_msg();
//	while (i < argc - 1)
//	{
//		a[i] = ft_strdup_castom(argv[i + 1]);
//		if (!a[i])
//		{
//			ft_free(a, i);
//			error_msg();
//		}
//		i++;
//	}
//	a[i] = NULL;
//	//// CHECK
//	i = 0;
//	while(a[i])
//		printf("%s\n", a[i++]);
//	////END CHECK
//	//// FREE
//	ft_free(a, i);
//	//// END FREE
//	return (a);
//}
//
//t_list sort_list(int argc)
//{
//	int i = 0;
//	int max_count = argc - 1;
//	while (i < max_count)
//	{
//		////PULL HALF FROM A TO B
//		i++;
//	}
//}
//void swap(t_list *st)
//{
//	t_list *tmp;
//	t_list *new;
//	tmp = st;
//
//}



int cust_atoi(char *str)
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
	if (*str)
		error_msg();
	return (answ * sign);
}

//int ft_strcmp(char *str, char *str2)
//{
//	while (*str && *str2)
//	{
//		if (*str == *str2)
//		{
//			str++;
//			str2++;
//		}
//		else
//			return (1);
//	}
//	if (!(*str) && !(*str2))
//		return (0);
//	return (1);
//}

t_opelem dup_finder(int num, t_list *st, t_opelem zn)
{
	t_list	*tmp;

	tmp = st;
	while (tmp->next)
	{
		if (num == tmp->content)
			error_msg();
		if (num > zn.max)
			zn.max = num;
		if (num < zn.min)
			zn.min = num;
		tmp = tmp->next;
	}
	return (zn);
}

t_list	*parsing(int argc, char **argv)
{
	t_list	*st;
	t_opelem zn;
	int		i;
	int		b;

	b = cust_atoi(argv[1]);
	st = ft_lstnew(b);
	zn.max = b;
	zn.min = b;
	i = 2;
	while (i < argc)
	{
		b = cust_atoi(argv[i]);
		zn = dup_finder(b, st, zn);
		ft_lstadd_back(&st, ft_lstnew(b));
		i++;
	}
	sort_list(st, (zn.max + zn.min) / 2, ft_lstsize(st));
	return (st);
	//// CHECK
	//	st = swap(st);
	//	st = rotate(st);
	i = 0;
	int j = ft_lstsize(st);
	while (i < j)
	{
		printf("%d\n", st->content);
		st = st->next;
		i++;
	}
	return (st);
	//// END CHECK
}

int main(int argc, char **argv)
{
	t_list *st;

	if (argc == 1)
		exit(1);
	else if (argc > 2)
	{
		st = parsing(argc, argv);
	}
	return 0;
}
