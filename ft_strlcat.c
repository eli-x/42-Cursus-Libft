#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	d_len;
	size_t	res;

	d_len = ft_strlen(dst);
	if (dstsize == 0)
		res = ft_strlen(src);
	else if (dstsize >= ft_strlen(dst))
		res = ft_strlen(src) + ft_strlen(dst);
	else
		res = ft_strlen(src) + dstsize;
	while (*src && dstsize - 1 > d_len && dstsize != 0)
	{
		dst[d_len] = *src;
		d_len++;
		src++;
	}
	dst[d_len] = '\0';
	return (res);
}
/*
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize == 0 || dstsize <= d_len)
		return (s_len + dstsize);
	while (s_len > 0 && dstsize - d_len - 1 > 0)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
*/