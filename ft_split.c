#include "libft.h"

static int	splits_count(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			cnt++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (cnt);
}

static void	free_str(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i++] = NULL;
	}
	free(str);
	str = NULL;
}

/*
#include <stdio.h>
int main ()
{
	char const *s = "hello12would 2 you 22where23";
	char	c = 50;
	int	a = splits_count(s, c);
	printf("%i\n", a);
	return (0);
}
*/	
