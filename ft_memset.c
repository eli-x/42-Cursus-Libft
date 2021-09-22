#include "libft.h"

void	*ft_memset(void *str, int val, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (len-- > 0)
		*ptr++ = (unsigned char)val;
	return (str);
}
/*
int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 13, '.', 8*sizeof(char));

	printf("After memset(): %s\n", str);
	return 0;
}
*/
