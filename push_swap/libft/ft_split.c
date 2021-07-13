#include "../includes/libft.h"

static void	ft_free(char **arr, size_t i)
{
	while (i)
		free(arr[i--]);
	free(arr);
}

static	int	wcounter(const char *str, char c)
{
	int	i;
	int	counter;
	int	help;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		help = 0;
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i++])
			help = 1;
		if (help == 1)
			counter++;
	}
	return (counter);
}

static int	mk_word(char **answ, const char *str, int counter, int masc)
{
	if (counter > 0)
	{
		answ[masc] = ft_substr(str, 0, counter);
		if (!answ[masc])
			ft_free(answ, masc);
		masc++;
	}
	return (masc);
}

static int	ft_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(const char *str, char c)
{
	char	**answ;
	int		counter;
	int		masc;

	if (!str)
		return (NULL);
	counter = wcounter(str, c);
	answ = (char **)malloc(sizeof(char **) * (counter + 1));
	if (!answ)
		return (NULL);
	masc = 0;
	while (*str)
	{
		counter = 0;
		while (*str == c)
			str++;
		counter = ft_len(str, c);
		masc = mk_word(answ, str, counter, masc);
		str += counter;
	}
	answ[masc] = NULL;
	return (answ);
}
