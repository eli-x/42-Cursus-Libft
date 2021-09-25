/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:58:50 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:58:51 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	splitslen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	cntsplits(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		s += splitslen(s, c);
		cnt++;
	}
	return (cnt);
}

static char	**frees(char **splts, int i)
{
	while (i--)
	{
		free(*splts);
		splts++;
	}
	free(splts);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	char		**res;
	size_t		splitcnt;
	size_t		lenofsub;

	splitcnt = cntsplits(s, c);
	res = (char **)malloc(sizeof(char *) * (splitcnt + 1));
	if (!s || !res)
		return (NULL);
	i = 0;
	while (splitcnt--)
	{
		while (*s == c)
			s++;
		lenofsub = splitslen(s, c);
		res[i] = malloc(lenofsub + 1);
		if (!res[i])
			return (frees(res, i));
		ft_strlcpy(res[i++], s, lenofsub + 1);
		s += lenofsub;
	}
	res[i] = 0;
	return (res);
}
