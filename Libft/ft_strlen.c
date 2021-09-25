/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:55:01 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:55:02 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)

{
	size_t	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}
/*
int	main()
{
	char	str[] = "a new line";
	printf("%lu\n", ft_strlen(str));
}
*/
