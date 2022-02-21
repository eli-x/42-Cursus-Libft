/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adrs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:56:10 by eli-x             #+#    #+#             */
/*   Updated: 2022/02/21 14:57:44 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_adrs(unsigned long int n, t_print *tab)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_get_adrs(n / 16, tab);
		ft_get_adrs(n % 16, tab);
	}
	else
	{
		ft_putchar(hex_base[n]);
		tab->len ++;
	}
}

void	ft_put_adrs(t_print *tab)
{
	unsigned long	adrs;

	adrs = va_arg(tab->args, unsigned long);
	ft_putstr("0x");
	tab->len += 2;
	ft_get_adrs(adrs, tab);
}
