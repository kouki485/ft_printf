/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:23:48 by kkohki            #+#    #+#             */
/*   Updated: 2022/02/07 18:43:10 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>

int		ft_printf(const char *format, ...);
size_t	ft_putchar(int c);
size_t	ft_convert(va_list ap, char *format);
size_t	ft_convert2(va_list ap, char *format);
size_t	ft_hexa_up(unsigned int n);
size_t	ft_hexa_low(unsigned long long n);
size_t	ft_unsigned_decimal(unsigned int n);
size_t	ft_putstr(const char *str);
size_t	ft_putnbr(long long int n);
size_t	ft_put_address(unsigned long long c);

#endif