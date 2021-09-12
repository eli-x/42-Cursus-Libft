#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	dup = malloc(sizeof(*s));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
/*
assignning *dup as char ptr, 
not const char as read-only*
int	main()
{
	char	str[] = "a new line";
	printf("%s\n'", ft_strdup(str));
}*/
