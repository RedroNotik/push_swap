#include "../includes/libft.h"

static size_t	ft_pow(unsigned int n)
{
	int	pow;

	pow = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		pow++;
	}
	return (pow);
}

static	char	*ft_num_to_word(long long int nu, size_t help, size_t pow)
{
	char	*numb;

	numb = (char *)malloc(pow + help + 1);
	if (!numb)
		return (NULL);
	numb[pow + help] = '\0';
	pow--;
	while (pow > 0)
	{
		numb[pow + help] = nu % 10 + '0';
		pow--;
		nu /= 10;
	}
	numb[pow + help] = nu + '0';
	if (help == 1)
		numb[0] = '-';
	return (numb);
}

char	*ft_itoa(long long int n)
{
	long long int	nu;

	nu = n;
	if (nu < 0)
		return (ft_num_to_word(-nu, 1, ft_pow(-nu)));
	else
		return (ft_num_to_word(nu, 0, ft_pow(nu)));
}
