/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:47:23 by kkohki            #+#    #+#             */
/*   Updated: 2022/02/07 18:37:32 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_hexa_up(unsigned int n)
{
	char	*src;
	char	c;
	size_t	i;

	src = "0123456789ABCDEF";
	i = 0;
	if (n < 16)
	{
		c = src[n];
		i += write(1, &c, 1);
	}
	else
	{
		i += ft_hexa_up(n / 16);
		i += ft_hexa_up(n % 16);
	}
	return (i);
}
