#include "get_next_line_bonus.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (s)
	{
		i = 0;
		tmp = NULL;
		if (start >= ft_strlen(s))
		{
			tmp = (char *)malloc(1);
			tmp[0] = '\0';
			return (tmp);
		}
		tmp = (char *)malloc(len + 1);
		if (!tmp)
			return (NULL);
		while (i < len)
			tmp[i++] = s[start++];
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*s2;
	size_t	i;
	size_t	j;

	j = ft_strlen(s1);
	i = 0;
	s2 = (char *)malloc(j + 1);
	if (!s2)
		return (NULL);
	while (i < j)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	if (!s)
		return (NULL);
	while (*tmp != c && *tmp != '\0')
		tmp++;
	if (*tmp == c)
		return (tmp);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concl;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s1 && s2)
	{
		k = ft_strlen(s2);
		j = ft_strlen(s1);
		concl = (char *)malloc((j + k + 1) * sizeof(char));
		if (!concl)
			return (NULL);
		i = 0;
		while (i < j)
		{
			concl[i] = s1[i];
			i++;
		}
		j = 0;
		while (j < k)
			concl[i++] = s2[j++];
		concl[i] = '\0';
		return (concl);
	}
	return (NULL);
}
