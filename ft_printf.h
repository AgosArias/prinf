/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:58:37 by aarias-d          #+#    #+#             */
/*   Updated: 2025/06/08 20:19:33 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(char const *str, ...);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_toupper(int c);
int		ft_puthexadecimal(unsigned int num, char x);
int		ft_putnbr_unsigned(unsigned int n, int fd);
size_t	ft_strlen(const char *str);
int		ft_printhexadecimal(unsigned int num, char x);
char	ft_tohexadecimal(int c);
int		ft_putpointer(unsigned long int num, char x);
int		ft_printpointer(unsigned long int num, char x);

#endif