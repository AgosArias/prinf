/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:58:20 by aarias-d          #+#    #+#             */
/*   Updated: 2025/06/06 18:46:23 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_tohexadecimal(int c)
{
		if(c < 10 && c >= 0)
				return(c + '0');
		else if (c >= 10 && c < 16)
				return(c + 'W');
		return('0');
}



int	ft_printhexadecimal(unsigned int num, char x)
{
	char	c;
	int len;

	len = 0;
	if (num >= 16)
		len += ft_printhexadecimal((unsigned int)(num / (int)16), x);
	c = ft_tohexadecimal(num % 16);
	if (x == 'X')
		c = (char)ft_toupper((int)c);
	len += ft_putchar_fd(c, 1);
	return (len);
}


int ft_puthexadecimal(unsigned long int num, char x)
{
	int	len;

	len = 0;
	if (num == 0)
		return (ft_putstr_fd("(nil)", 1) );
	else
	{
		len += ft_putstr_fd("0x", 1); 
		len += ft_printhexadecimal(num, x);
	}
	return(len);
}