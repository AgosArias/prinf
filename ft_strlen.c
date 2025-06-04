#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	if (i == 0)
		return (0);
	return (i);
}
