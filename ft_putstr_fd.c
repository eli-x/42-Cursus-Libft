#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (*s && s)
		write (fd, s, ft_strelen(s));
}
