#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, (int)*(s1 + start)) && *(s1 + start))
		start++;
	if (!*(s1 + start))
		return (NULL);
	while (ft_strchr(set, (int)*(s1 + (len - 1 - end))) && *(s1 + (len - 1 - end)))
		end++;
	return (ft_substr(s1, start, len - start - end));
}
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		begin = 0;
		end = ft_strlen(s1);
		while (s1[begin] && ft_strchr(set, s1[begin]))
			begin++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > begin)
			end--;
		str = (char *)malloc(sizeof(char) * (end - begin + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[begin], end - begin + 1);
		return (str);
	}
}
*/
