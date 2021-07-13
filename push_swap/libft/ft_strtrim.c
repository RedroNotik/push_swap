#include "../includes/libft.h"

static size_t	kind_of_for(const char *s1, const char *set,
	   	int sign, size_t i)
{
	int		help;
	size_t	j;

	while (s1[i])
	{
		help = 0;
		j = 0;
		while (set[j])
			if (s1[i] == set[j++])
				help = 1;
		if (help != 1)
			break ;
		i += sign;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	finish;
	int		i;
	int		len;

	if (s1)
	{
		i = 0;
		start = kind_of_for(s1, set, 1, 0);
		finish = kind_of_for(s1, set, -1, ft_strlen(s1) - 1) + 1;
		if (finish == 0)
			start = finish;
		str = malloc (finish - start + 1);
		if (!str)
			return (NULL);
		len = finish - start;
		str[len] = '\0';
		if (len == 0)
			return (str);
		while (i < len)
			str[i++] = s1[start++];
		return (str);
	}
	return (NULL);
}
