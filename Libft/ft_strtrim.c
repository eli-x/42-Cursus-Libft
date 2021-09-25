/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:52:40 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:52:40 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (0);
}
