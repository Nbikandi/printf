/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:13:04 by nbikandi          #+#    #+#             */
/*   Updated: 2022/06/27 18:21:16 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexa(unsigned long int nb, char c)
{
	int	res;

	res = 0;
	if (c == 'x' || c == 'p')
	{
		if (nb >= 16)
			res = ft_printf_hexa(nb / 16, c);
		res += ft_putchar("0123456789abcdef"[nb % 16]);
	}
	if (c == 'X')
	{
		if (nb >= 16)
		{
			res += ft_printf_hexa(nb / 16, c);
		}
		res += ft_putchar("0123456789ABCDEF" [nb % 16]);
	}
	return (res);
}
