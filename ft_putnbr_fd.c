/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:11:20 by aarias-d          #+#    #+#             */
/*   Updated: 2025/06/08 20:06:20 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbr_fd(int n, int fd)
{
	int len;

	len =0;
	if (n == INT_MIN)
		return (ft_putstr_fd("-2147483648",1));
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
		len += ft_putnbr_fd((n / 10), fd);
	len += ft_putchar_fd((n % 10) + '0', fd);
	return (len);
}
