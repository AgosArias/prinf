#include "ft_printf.h"

char	ft_hex(int c)
{
		if(c < 10 && c >= 0)
				return(c + '0');
		else if (c >= 10 && c < 16)
				return(c + 'W');
		return('0');
}

int	ft_puthex(int num, char x)
{
	char	c;
	if (num < 16)
	{
		c = ft_hex(num);
		if (x == 'X')
			c = ft_toupper(c);
		return (ft_putchar_fd(c, 1));
	}
	if (num >= 16)
		ft_puthex((num / 16), x);
	c = ft_hex(num % 16);
	if (x == 'X')
		c = ft_toupper(c);
	ft_putchar_fd(c, 1);
	return (ft_numlen(num));
}
