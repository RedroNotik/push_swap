#include "../includes/libft.h"

void	ft_putstr_fd(char *s, int len, int fd)
{
	if (s)
		write(fd, s, len);
}
