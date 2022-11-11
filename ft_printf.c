/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:23:28 by kkohki            #+#    #+#             */
/*   Updated: 2022/02/07 18:42:49 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	char	*tmp;
	size_t	size;

	va_start(ap, format);
	if (!format)
		return (-1);
	tmp = (char *)format;
	size = 0;
	while (*tmp)
	{
		if (*tmp == '%')
		{
			tmp++;
			size += ft_convert(ap, tmp);
		}
		else
			size += ft_putchar(*tmp);
		tmp++;
	}
	va_end(ap);
	return (size);
}
