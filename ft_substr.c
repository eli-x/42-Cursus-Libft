/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:52:47 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:52:48 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	if (ft_strlen(s) > start)
	{
		while (s[start + i] && len > i)
		{
			res[i] = s[start + i];
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
/*
int	main()
{
		char const *s = "this is a new line";
		char *rst = "";
		rst = ft_substr(s, 3, 5);
		puts(rst);
		return (0);
}
*/
