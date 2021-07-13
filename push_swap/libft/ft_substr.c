#include "../includes/libft.h"

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
