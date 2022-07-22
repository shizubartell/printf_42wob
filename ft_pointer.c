/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:21:08 by abartell          #+#    #+#             */
/*   Updated: 2022/07/22 13:30:24 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar(int c)
{
    write(1, &c, 1);
    return(1);
}

static int hex_pointer(unsigned long p)
{
    int p;

    p = 0;
    if (p < 16)
    {
        if (p > 9)
            p = p + ft_putchar(p + 87);
        else
            p = p + ft_putchar(p + 48);
    }
    else if (p > 15)
    {
        p = p + hex_pointer(p / 16);
        p = p + hex_pointer(p % 16);
    }
    return (p);
}

int ft_pointer(void *ptr)
{
    int point;

    point = 0;
    point = point + ft_string("0x");
    point = point + hex_pointer((unsigned long)ptr);
    return (point);
}
