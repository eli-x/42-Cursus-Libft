#include <stdio.h>

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == 0 || src == 0)
		return (0);
	if (dstsize > 0)
	{
		while (j < dstsize - 1 && src[j])
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
//in <string.h>
//Returns the total length of the string they tried to create
//copies up to [dstsize - 1] chars from src to dst, 
//NUL-terminating the result if dstsize != 0.
int main()
{
	char	str1[] = "ABC DEF ghi";
	char	str2[] = "hello, this is me";
	printf("%lu\n", ft_strlcpy(str1, str2, 6));
	printf("%s\n", str1);	
	return (0);
}	 	
*/