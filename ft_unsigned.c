/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:09:06 by abartell          #+#    #+#             */
/*   Updated: 2022/07/16 21:13:48 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int n, int *ptr)
{
	if (n > 9)
	{
		ft_putnbr_u(n / 10, ptr);
		n %= 10;
	}
	*ptr += ft_putchar(n + '0');
}

void	print_nmb_u(va_list arg, int *buffer)
{
	int		num;

	num = va_arg(arg, int);
	ft_unsigned(num, buffer);
}
