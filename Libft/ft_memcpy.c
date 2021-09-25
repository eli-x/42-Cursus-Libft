/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:53:35 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:53:36 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;

	dst1 = (char *)dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		*dst1++ = *(char *)(src++);
	}
	return (dst);
}
/*
#include <stdio.h>

int	main()
{
	char str[] = "xyz UVW rst OPQ";
	ft_memcpy(str + 1, str + 5, 3);
	puts(str);
}
*/
/*
{
	char str1[10];
	str1[0] = '\0';
	char str2[20];
	str2[0] = '\0';
	ft_memcpy(str1, str2, 2);
	printf("The return value is %s", str1);
	// ?how to initialize a NULL string correctly?
}
*/
