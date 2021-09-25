/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:54:55 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:54:56 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main ()
{
	int d = INT_MIN;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = -13;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 0;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 589;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = INT_MAX;
	printf("%d =? %s\n", d, ft_itoa(d));
	return (0);
}
*/
