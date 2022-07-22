/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:09:06 by abartell          #+#    #+#             */
/*   Updated: 2022/07/22 20:48:40 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putcharui(int c)
{
    write(1, &c, 1);
    return (1);
}

//unsigned integers are used when we know that the value
//that we are storing will always be non-negative(zero
//or positive)
//NOTE: it is almost always the case that you could use a 
//regular integer variable in place of an unsigned integer.
int ft_unsigned(unsigned int u)
{
    int i;

    i = 0;
    if (u > 9)
    {
    //same function as printnbr only without
    //minus and min/max cases
    //again base 10
        i = i + ft_printnbr(u / 10);
        i = i + ft_putcharui(u % 10 + 48);
    //moving it 48 spaces on the ASCII table to get back to the value
    //between 0 and 9
    }
    else
    {
        i = i + ft_putcharui(u + 48);
    }
    return (i);
}
