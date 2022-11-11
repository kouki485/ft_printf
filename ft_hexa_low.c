/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:47:19 by kkohki            #+#    #+#             */
/*   Updated: 2022/02/07 18:37:23 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_hexa_low(unsigned long long n)
{
	char	*src;
	char	c;
	size_t	i;

	src = "0123456789abcdef";
	i = 0;
	if (n < 16)
	{
		c = src[n];
		i += write(1, &c, 1);
	}
	else
	{
		i += ft_hexa_low(n / 16);
		i += ft_hexa_low(n % 16);
	}
	return (i);
}
