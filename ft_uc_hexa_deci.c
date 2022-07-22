/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uc_hexa_deci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:51:57 by abartell          #+#    #+#             */
/*   Updated: 2022/07/22 12:03:53 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar (int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_uc_hexa_deci (unsigned int max)
{
    int max;

    max = 0;
    if (max < 16)
    {
        if (max > 9)
            max = max + ft_putchar(max + 55);
        else
            max = max + ft_putchar(max + 48);
    }
    else if (max > 15)
    {
        max = max + ft_uc_hexa_deci(max / 16);
        max = max + ft_uc_hexa_deci(max % 16);
    }
    return(max);
}
