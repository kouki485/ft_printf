/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:47:12 by kkohki            #+#    #+#             */
/*   Updated: 2022/02/07 18:42:16 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_convert(va_list ap, char *format)
{
	size_t	size;

	size = 0;
	size += ft_convert2(ap, format);
	if (*format == 'X')
		size += ft_hexa_up(va_arg(ap, unsigned int));
	if (*format == 'x')
		size += ft_hexa_low(va_arg(ap, unsigned int));
	if (*format == 'u')
		size += ft_unsigned_decimal(va_arg(ap, unsigned int));
	if (*format == 'p')
		size += ft_put_address(va_arg(ap, unsigned long long));
	return (size);
}
