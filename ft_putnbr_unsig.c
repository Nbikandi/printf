/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:08:29 by nbikandi          #+#    #+#             */
/*   Updated: 2022/06/27 18:20:54 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsig(unsigned int nb)
{
	int	dest;

	dest = 0;
	if (nb >= 10)
		dest = ft_putnbr_unsig(nb / 10);
	nb = nb % 10;
	if (nb < 10)
		dest += ft_putchar(nb + '0');
	return (dest);
}
