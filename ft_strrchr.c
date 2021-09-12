#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (s[i] == (char)c)
			return ((char *)s + i);
	return (NULL);
}
/*
identical to strchr,
however locates the last occurance of c instead
(from right to left checking...
int	main()
{
	char s[30] = "Where is this place?"
	char	*answer;

	answer = ft_strrchr(s, 115);
	puts(answer);
	return (0);
}
*/
