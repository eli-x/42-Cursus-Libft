// function in <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (n--)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
*/
/*
int	main()
{
	char	str[] = "abc DEF ghi JKL";
	ft_bzero(str, 1);
	puts(str);
}
*/
