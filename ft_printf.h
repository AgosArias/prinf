#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(char const *, ...);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_toupper(int c);
int		ft_puthex(int num, char x);
int		ft_putnbr_unsigned(unsigned int n , int fd);
int		ft_numlen(unsigned long n);
size_t	ft_strlen(const char *str);

#endif