/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:52:09 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:52:10 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
/*
include <stdio.h>
int	main()
{
	char	s1[] = "ABC def GHI jkl";
	char	s2[] = "ABC def GHI jklml";
	printf("%i\n", ft_memcmp(s1, s2, 15));
	printf("%i\n", ft_memcmp(s1, s2, 20));
	printf("%i\n", ft_memcmp(s2, s1, 20));
}
*/
