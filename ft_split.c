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

static void	free_str(char **str, int i)
{
	while (str[i] && i >= 0)
	{
		free(str[i]);
		str[i] = NULL;
		i--;
	}
	free(str);
	str = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*start;
	int		j;

	j = 0;
	new = (char **)malloc(sizeof(char *) * (splits_count(s, c) + 1));
	if (!s || !new)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			new[j++] = ft_substr(start, 0, (s - start));
			if (!new[j])
				free_str(new, j);
		}
		else
			s++;
	}
	new[j] = 0;
	return (new);
}
/*
 * need more working 
 * a.out(88054,0x116c5bdc0) malloc: *** error for object 0x7fb6d1405800: pointer being freed was not allocated
 * a.out(88054,0x116c5bdc0) malloc: *** set a breakpoint in malloc_error_break to debug
#include <stdio.h>
int	main()
{
	char s[100] = "this is a test string to check if the function works well; if not, then I might  have 2 do this again";
	char c = ' ';
	unsigned int	cnt = splits_count(s, c);
	char	**new = ft_split(s, c);
	unsigned int	i = 0;
	
	while (*new[i])
	{
		printf("%d ", i);
		printf("%s\n", new[i]);
		i++;
	}
	return (0);
}
*/
