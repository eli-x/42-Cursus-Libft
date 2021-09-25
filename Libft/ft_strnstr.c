/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:53:01 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:53:03 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nee_len;

	nee_len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- >= nee_len)
	{
		if (*haystack == *needle && !ft_memcmp(haystack, needle, nee_len))
			return ((char *)haystack);
		++haystack;
	}
	return (NULL);
}
/*
int	main()
{
	const char *largestr = "Foo Bar Baz";
	const char *smallstr = "Bar";
	char *ptr;
	char *ptr1;

	ptr = ft_strnstr(largestr, smallstr, 4);
	ptr1 = ft_strnstr(largestr, smallstr, 7);

	puts(ptr);
	puts(ptr1);
	return (0);
}
*/
