#include "../includes/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, ft_strlen(s), fd);
		write(fd, "\n", 1);
	}
}
