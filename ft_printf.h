/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:23:31 by nbikandi          #+#    #+#             */
/*   Updated: 2022/06/27 17:45:57 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *formt, ...);
int	ft_printf_hexa(unsigned long int nb, char c);
int	ft_putchar(int c);
int	ft_putnbr_unsig(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);

#endif
