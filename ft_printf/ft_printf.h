/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:55:12 by eli-x             #+#    #+#             */
/*   Updated: 2022/02/21 14:55:49 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h> //testing main
# include <stdint.h> // for type uintptr_t

typedef struct s_print
{
	va_list	args;
	int		len;
}	t_print;

int		ft_printf(const char *fmt, ...);
void	ft_put_c(t_print *tab);
void	ft_put_s(t_print *tab);
void	ft_putperc(t_print *tab);
void	ft_put_adrs(t_print *tab);
void	ft_put_di(t_print *tab);
void	ft_put_u(t_print *tab);
void	ft_tothehex(t_print *tab);
void	ft_tothehex_1(t_print *tab);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_get_hex(unsigned int n, t_print *tab);
void	ft_get_hex1(unsigned int n, t_print *tab);
#endif