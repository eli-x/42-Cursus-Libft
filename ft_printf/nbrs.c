/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:56:30 by eli-x             #+#    #+#             */
/*   Updated: 2022/02/21 14:57:07 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long int n)
{
	if (n < 0)
		n = -n;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void	ft_base10(unsigned int n, t_print *tab)
{
	char	*base;

	base = "0123456789";
	if (n > 9)
	{
		ft_base10(n / 10, tab);
		ft_base10(n % 10, tab);
	}
	else
	{
		ft_putchar(base[n]);
		tab->len++;
	}
}

void	ft_put_di(t_print *tab)
{
	int	n;

	n = va_arg(tab->args, long int);
	if (n < 0)
	{
		n = -n;
		tab->len ++;
		ft_putchar('-');
	}
	ft_putnbr(n);
	if (n == 0)
		tab->len ++;
	while (n != 0)
	{
		n = n / 10;
		tab->len ++;
	}
}

void	ft_put_u(t_print *tab)
{
	int	n;

	n = va_arg(tab->args, int);
	ft_base10(n, tab);
}
