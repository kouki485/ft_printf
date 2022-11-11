/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:47:50 by kkohki            #+#    #+#             */
/*   Updated: 2022/02/07 18:38:13 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_unsigned_decimal(unsigned int n)
{
	size_t	i;
	char	c;

	i = 0;
	if (n < 10)
	{
		c = n + '0';
		i += write(1, &c, 1);
	}
	else
	{
		i += ft_unsigned_decimal(n / 10);
		i += ft_unsigned_decimal(n % 10);
	}
	return (i);
}
