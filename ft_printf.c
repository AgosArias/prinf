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

#include "ft_printf.h"

int	ft_validif(char c, va_list ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar_fd(va_arg(ap, int), 1);
	else if (c == 's')
		len += ft_putstr_fd(va_arg(ap, char *), 1);
	else if (c == 'x' || c == 'X')
		len += ft_puthex(va_arg(ap, int), c);
	else if (c == 'd' || c == 'i')
		len += ft_putnbr_fd(va_arg(ap, int), 1);
	else if (c == '%')
		len += ft_putchar_fd('%', 1);
	else if (c == 'u')
		len += ft_putnbr_unsigned(va_arg(ap, unsigned int), 1);
	else if (c == 'p')
		len += ft_putstr_fd("0x", 1) + ft_puthex(va_arg(ap, unsigned int), 'x');
	else
		return (0);
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str++ == '%')
			len += ft_validif(*str, ap);
		else
		{
			len++;
			ft_putchar_fd(*str, 1);
		}
		str++;
	}
	va_end(ap);
	return (len);
}
