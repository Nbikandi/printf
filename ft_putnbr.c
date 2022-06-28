/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:48:16 by nbikandi          #+#    #+#             */
/*   Updated: 2022/06/27 17:46:32 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	dest;

	dest = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		dest += write (1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		dest += ft_putnbr(nb / 10);
	nb = nb % 10;
	if (nb < 10)
		dest += ft_putchar(nb + 48);
	return (dest);
}
