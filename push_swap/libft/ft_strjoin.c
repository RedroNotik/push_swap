#include "../includes/libft.h"

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
