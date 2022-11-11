/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:47:15 by kkohki            #+#    #+#             */
/*   Updated: 2022/02/07 18:42:32 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_convert2(va_list ap, char *format)
{
	size_t	size;

	size = 0;
	if (*format == 'c')
		size += ft_putchar((char)va_arg(ap, int));
	if (*format == 's')
		size += ft_putstr(va_arg(ap, char *));
	if (*format == '%')
		size += ft_putchar('%');
	if (*format == 'd' || *format == 'i')
		size += ft_putnbr(va_arg(ap, int));
	return (size);
}
