/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:16:03 by nbikandi          #+#    #+#             */
/*   Updated: 2022/06/27 17:46:51 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chs_type(va_list ap, char j)
{
	int	i;

	i = 0;
	if (j == 'c')
		i += ft_putchar(va_arg(ap, int));
	if (j == 's')
		i += ft_putstr(va_arg(ap, char *));
	if (j == 'p')
		i += ft_putstr("0x") + ft_printf_hexa(va_arg(ap, unsigned long int), j);
	if ((j == 'd') || j == 'i')
		i += ft_putnbr(va_arg(ap, int));
	if (j == 'u')
		i += ft_putnbr_unsig(va_arg(ap, unsigned int));
	if ((j == 'x') || j == 'X')
		i += ft_printf_hexa(va_arg(ap, unsigned int), j);
	if (j == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(char const *formt, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, formt);
	while (*formt)
	{
		if (*formt == '%')
			i += ft_chs_type(list, *++formt);
		else
			i += ft_putchar(*formt);
		formt++;
	}
	va_end(list);
	return (i);
}
