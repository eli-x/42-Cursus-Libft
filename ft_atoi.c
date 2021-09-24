/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:45:57 by eli-x             #+#    #+#             */
/*   Updated: 2021/09/24 23:46:02 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	abs;

	sign = 1;
	abs = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		abs = abs * 10 + *(str++) - '0';
		if (abs >= (unsigned long)(-(LONG_MIN + 1)) + 1 && sign < 0)
			return (0);
		else if (abs >= LONG_MAX && sign > 0)
			return (-1);
	}
	return ((int)(sign * abs));
}
/*
{
	int		sign;
	int		val;

	sign = 1;
	val = 0;
	while (*str == ' ' || (*str >= 8 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + (*str - '0');
		str++;
	}
	return (val * sign);
}
*/
/*
int main()
{
    char* s1 = "---123";   
    char* s2 = "---+--+1234ab567";
    char* s3 = "  123aa";
    char* s4 = "123 123";
    
    int num1 = ft_atoi(s1);
    int num2 = ft_atoi(s2);
    int num3 = ft_atoi(s3);
    int num4 = ft_atoi(s4);

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("%d\n", num4);

    return 0;
}
*/