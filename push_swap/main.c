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
	printf("%d ---\n",answ);
	if (*str)
		error_msg();
	return (answ * sign);
}

//char *sort(int argc, t_list **st, t_opelem zn)
//{
//	char *answ;
//
//	if (argc == 3)
//		answ = two_elem(&st);
//	else if (argc == 4)
//		answ = three_elem(&st);
//	else if (argc == 5)
//		answ = four_elem(&st, zn.min);
//	else if (argc == 6)
//		answ = five_elem(&st, zn.min);
//	else
//		sort_list(&st, zn, ft_lstsize(*st));
//
//	answ = "123";
//	return (answ);
//}

t_opelem dup_finder(int num, t_list *st, t_opelem zn)
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
	zn = min_max(zn, num);
	return (zn);
}

t_opelem parsing(int argc, char **argv, t_list **st)
{
	t_opelem zn;
	int		b;
	t_list	*help;

	help = *st;
	b = cust_atoi(argv[1]);
	printf("123");
	help = ft_lstnew(b);
	zn.max = b;
	zn.min = b;
	zn.size = 0;
	while (zn.size < argc)
	{
		//b = cust_atoi(argv[zn.size]);
		//zn = dup_finder(b, help, zn);
	//	ft_lstadd_back(&help, ft_lstnew(b));
		zn.size++;
	}
	zn.size--;
	zn.mid = (zn.max + zn.min) / 2;
//	if (argc == 3)
//		st = two_elem(st);
//	else if (argc == 4)
//		st = three_elem(st);
//	else if (argc == 5)
//		st = four_elem(st, zn.min);
//	else if (argc == 6)
//		st = five_elem(st, zn.min);
//	else
//		sort_list(st, zn, ft_lstsize(st));
	return (zn);
}

int main(int argc, char **argv)
{
	t_list *a;
	t_opelem zn;
	char *answ;

	if (argc == 1)
		exit(1);
	else if (argc >= 2)
	{
		zn = parsing(argc, argv, &a);
		answ = sort_list(argc, &a, zn);
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
