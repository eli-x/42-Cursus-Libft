/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:56:01 by eli-x             #+#    #+#             */
/*   Updated: 2022/02/21 14:57:50 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_init_tab(t_print *tab)
{
	tab->len = 0;
	return (tab);
}

void	read_fmt(const char f, t_print *tab)
{
	if (f == 'c')
		ft_put_c(tab);
	if (f == 's')
		ft_put_s(tab);
	if (f == 'd' || f == 'i')
		ft_put_di(tab);
	if (f == 'p')
		ft_put_adrs(tab);
	if (f == 'u')
		ft_put_u(tab);
	if (f == 'x')
		ft_tothehex(tab);
	if (f == 'X')
		ft_tothehex_1(tab);
	if (f == '%')
		ft_putperc(tab);
}

int	ft_printf(const char *fmt, ...)
{
	t_print	*tab;
	int		i;

	tab = malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	tab = ft_init_tab(tab);
	i = 0;
	va_start(tab->args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
			read_fmt(fmt[i++ + 1], tab);
		else
		{
			ft_putchar(fmt[i]);
			tab->len++;
		}
		i++;
	}
	free(tab);
	return (tab->len);
}
