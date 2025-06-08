/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 18:14:27 by aarias-d          #+#    #+#             */
/*   Updated: 2025/06/08 19:34:31 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(unsigned long int num, char x)
{
	char	c;
	int len;

	len = 0;
	if (num >= 16)
		len += ft_printpointer((unsigned long int)(num / ( long int)16), x);
	c = ft_tohexadecimal(num % 16);
	if (x == 'X')
		c = (char)ft_toupper((int)c);
	len += ft_putchar_fd(c, 1);
	return (len);
}


int ft_putpointer(unsigned long int num, char x)
{
	int	len;

	len = 0;
	if (num == 0)
		return (ft_putstr_fd("(nil)", 1) );
	else
	{
		len += ft_putstr_fd("0x", 1); 
		len += ft_printpointer(num, x);
	}
	return(len);
}