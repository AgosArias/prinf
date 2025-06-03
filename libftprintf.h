#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

int     ft_printf(char const *, ...);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
int     ft_toupper(int c);//ft_puthex
void    ft_puthex(int num, char x);
void	ft_putnbr_unsigned(unsigned int n , int fd);


#endif
