/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:27:33 by aarias-d          #+#    #+#             */
/*   Updated: 2025/06/08 20:11:43 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putnbr_unsigned((n / 10), fd);
	len += ft_putchar_fd((n % 10) + '0', fd);
	return (len);
}
