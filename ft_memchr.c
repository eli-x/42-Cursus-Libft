/*returns a pointer to the byte located,
 or NULL if such byte not exists within n bytes*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (n > ++i)
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "ABC def GHI jkl";
	puts(ft_memchr(str, 67, 2));
	puts(ft_memchr(str, 67, 5));
}
*/
