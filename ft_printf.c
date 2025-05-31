/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 21:19:43 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/31 22:03:42 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_validif(char const *str,va_list ap)
{
	if (!*str)
		return (0);
	if(*str == 'c')
	{
		ft_putchar_fd(str,1);
		return(ft_strlen(ap));
	}
	return(1);
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
		{
			len += ft_validif(*str, ap);
		}
		len++;
	}
	va_end(ap);
	return(len);
}
