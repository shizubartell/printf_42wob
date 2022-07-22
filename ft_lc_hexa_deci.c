/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lc_hexa_deci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:06:45 by abartell          #+#    #+#             */
/*   Updated: 2022/07/22 21:01:01 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchare(char c)
{
    write (1, &c, 1);
    return(1);
}

//prints the value in hexadecimal format with
//alphabets in lowercase (a-f)
int	ft_lc_hexa_deci(unsigned int hex)
{
	int	i;

	i = 0;
	if (hex < 16)
	{
	//to be able to print the value we move the input
    // 87 spaces on the ASCII table if its bigger than 9
    //otherwise only 48 spaces (a-f)
		if (hex > 9)
			i = i + ft_putchare(hex + 87);
		else
			i = i + ft_putchare(hex + 48);
	}
	else if (hex > 15)
	{
		//divide and modulus operator for base 16
        //0123456789abcdef
		i = i + ft_lc_hexa_deci(hex / 16);
		i = i + ft_lc_hexa_deci(hex % 16);
	}
	return (i);
}
