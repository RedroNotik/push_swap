#include "get_next_line_bonus.h"

static	int	find_line(int fd, char **line, char **fdlist, char *tmp2)
{
	char	*tmp;

	tmp = fdlist[fd];
	*line = ft_substr(fdlist[fd], 0, (tmp2 - fdlist[fd]));
	fdlist[fd] = ft_strdup(fdlist[fd] + (ft_strlen(*line) + 1));
	if (tmp)
	{
		free(tmp);
		tmp = NULL;
	}
	return (1);
}

int	return_f(int ret, char **fdlist, int fd, char **line)
{
	if (ft_strchr(fdlist[fd], '\n'))
		return (find_line(fd, line, fdlist, ft_strchr(fdlist[fd], '\n')));
	if (ret == 0)
	{
		*line = ft_strdup(fdlist[fd]);
		free(fdlist[fd]);
		fdlist[fd] = NULL;
		return (0);
	}
	return (-1);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*let;

	i = 0;
	let = b;
	while (i++ < len)
		*let++ = c;
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = (void *)malloc(count * size);
	if (!(tmp))
		return (NULL);
	ft_memset(tmp, 0, count * size);
	return (tmp);
}

int	get_next_line(int fd, char **line)
{
	int			ret;
	char		*bf;
	static char	*fdlist[1024] = {0};
	char		*tmp;

	if (read(fd, 0, 0) < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	bf = malloc(sizeof(char *) * BUFFER_SIZE + 1);
	if (!bf)
		return (-1);
	ret = 1;
	if (!fdlist[fd])
		fdlist[fd] = ft_calloc(1, 1);
	while (ret > 0 && !ft_strchr(fdlist[fd], '\n'))
	{
		ret = read(fd, bf, BUFFER_SIZE);
		bf[ret] = '\0';
		tmp = fdlist[fd];
		fdlist[fd] = ft_strjoin(fdlist[fd], bf);
		if (tmp)
			free(tmp);
		tmp = NULL;
	}
	free(bf);
	return (return_f(ret, fdlist, fd, line));
}
