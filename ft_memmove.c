#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t count)
{
	if (src >= dst)
	{
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else
	{
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
	return (dst);
}
/*
int	main()
{
	char str[] = "ABC def GHI jkl";
	char str1[] = "xyz UVW rst OPQ";
	ft_memmove(str + 2, str + 8, 3);
	ft_memmove(str1 + 19, str1 + 18, 3);
	puts(str);
	puts(str1);
}
*/
