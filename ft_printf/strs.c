/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:56:37 by eli-x             #+#    #+#             */
/*   Updated: 2022/02/21 14:58:12 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putperc(t_print *tab)
{
	ft_putchar('%');
	tab->len ++;
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_put_c(t_print *tab)
{
	char	c;

	c = va_arg(tab->args, unsigned int);
	tab->len += 1;
	ft_putchar(c);
}

void	ft_put_s(t_print *tab)
{
	char	*s;
	int		i;

	s = va_arg(tab->args, char *);
	if (!s)
	{
		ft_putstr("(null)");
		tab->len += 6;
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		tab->len++;
		i++;
	}
}
