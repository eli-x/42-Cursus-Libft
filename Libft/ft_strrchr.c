/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:58:16 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:58:29 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*this ver KO once on test2, crash once on test3
{
	char	*res;

	res = 0;
	while (*s)
	{
		if (*s == c)
			res = (char *)s;
		s++;
	}
	if (c == 0)
		res = (char *)s;
	return (res);
}

identical to strchr,
however locates the last occurance of c instead
(from right to left checking...
*/
