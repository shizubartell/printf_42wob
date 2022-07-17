/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:18:51 by abartell          #+#    #+#             */
/*   Updated: 2022/07/17 17:58:35 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_printnbr(int min)
{
    int i;

    i = 0;
    if ( min == -2147483648)
    {
        //handling the INT_MIN
        write(1, "-2147483648", 11);
        i = 11;
    }
    else if (min < 0)
    {
        //handling printing the minus
        i = i + ft_putchar('-');
        min = min * -1;
        i = i + ft_printnbr(min);
    }
    else if (min > 9)
    {
        //as long as input is bigger than 9 its handling it via divide
        //and modulus operator
        i = i + ft_printnbr(min / 10);
        i = i + ft_printnbr(min % 10);
    }
    else
    //It is adding the ASCII code of hexVal[i] from the ASCII code for '0'. 
    //This converts a character in the range '0' to '9' to a value in the range 0 to 9.
    i = i + ft_putchar(min + 48);
    return (i);
}
