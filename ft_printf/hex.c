/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:56:17 by eli-x             #+#    #+#             */
/*   Updated: 2022/02/21 14:57:58 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_hex(unsigned int n, t_print *tab)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_get_hex(n / 16, tab);
		ft_get_hex(n % 16, tab);
	}
	else
	{
		ft_putchar(hex_base[n]);
		tab->len ++;
	}
}

void	ft_tothehex(t_print *tab)
{
	int	n;

	n = va_arg(tab->args, unsigned int);
	ft_get_hex(n, tab);
}

void	ft_get_hex1(unsigned int n, t_print *tab)
{
	char	*hex_base;

	hex_base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_get_hex1(n / 16, tab);
		ft_get_hex1(n % 16, tab);
	}
	else
	{
		ft_putchar(hex_base[n]);
		tab->len ++;
	}
}

void	ft_tothehex_1(t_print *tab)
{
	int	n;

	n = va_arg(tab->args, unsigned int);
	ft_get_hex1(n, tab);
}
