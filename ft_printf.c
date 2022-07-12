/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:28:49 by abartell          #+#    #+#             */
/*   Updated: 2022/07/12 15:43:57 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

static int  ft_arguments(const char *a, va_list args)
{
     if (*a == 'c')
        return(ft_character(va_arg(args, int)));
    {
        
    }
}

int ft_printf(const char *ptr, ...)
{
    va_list args;
    const char  *str;
    int i;

    i = 0;
    // setting value for str
    if (!str)
        return (0);
    va_start(args, ptr);
    // going through the different possibilites of the argument
    va_end(args);
    return (i);
}