/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:51:40 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:51:58 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (n > ++i)
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
	return (NULL);
}
/*returns a pointer to the byte located,
 or NULL if such byte not exists within n bytes

#include <stdio.h>
int	main()
{
	char	str[] = "ABC def GHI jkl";
	puts(ft_memchr(str, 67, 2));
	puts(ft_memchr(str, 67, 5));
}
*/
