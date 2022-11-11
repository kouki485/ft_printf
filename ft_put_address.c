/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:43:21 by kkohki            #+#    #+#             */
/*   Updated: 2022/02/07 18:44:46 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_address(unsigned long long c)
{
	size_t	size;

	ft_putstr("0x");
	size = 2;
	if (!c)
	{
		ft_putchar('0');
		return (++size);
	}
	size += ft_hexa_low(c);
	return (size);
}
