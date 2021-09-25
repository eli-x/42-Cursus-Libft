/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:46:36 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:46:39 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (n--)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

int	main()
{
	char	str[] = "abc DEF ghi JKL";
	ft_bzero(str, 1);
	puts(str);
}
*/
