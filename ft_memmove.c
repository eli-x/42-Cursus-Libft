#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t count)

{
	char	*tmp;
	char	*dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (count--)
			dest[count] = tmp[count];
	}
	else
		ft_memcpy(dest, tmp, count);
	return (dst);
}
/*
copies count bytes from src to dst, 
resemble to memcpy.
2 strs may overlap
*/
/*
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
*/
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
