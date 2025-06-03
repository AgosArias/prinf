/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 21:19:43 by aarias-d          #+#    #+#             */
/*   Updated: 2025/06/03 19:53:43 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_validif(char const *str,va_list ap)
{
	if (!*str)
		return (0);
	if(*str == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	else if (*str == 's')
		ft_putstr_fd(va_arg(ap, char*),1);	
	else if (*str == 'x' || *str == 'X')
		ft_puthex(va_arg(ap, int), str);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_fd(va_arg(ap, int),1);
	else if (*str == '%')
		ft_putchar_fd('%',1);
	else if (*str == 'u')
		ft_putnbr_unsigned(va_arg(ap, unsigned int),1);
		
}

int	ft_printf(char const *str, ...)
{
	va_list ap;
	int len;
	
	if(!ap)
		return (0);
	len = 0;
	va_start(ap,str);
	while (*str)
	{
		if (*str++ == '%')
			len += ft_validif(*str, ap);
		else
			len++;
	}
	va_end(ap);
	return(len);
}
