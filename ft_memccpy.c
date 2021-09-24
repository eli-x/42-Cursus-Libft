/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:51:09 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:51:10 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (dst + i + 1);
	}
	return (NULL);
}
/*int	main()
{
	char src[] = "XYZ uvw RST opq";
	char dst[] = "abc DEF ghi JKL";
	puts(ft_memccpy(dst, src, 88, 3));
	puts(ft_memccpy(dst, src, 141, 3));
}
*/
