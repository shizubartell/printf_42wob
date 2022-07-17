/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:54:05 by abartell          #+#    #+#             */
/*   Updated: 2022/07/16 21:49:59 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//giving the output of a string as a var for printf

int	ft_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
//could also be written as += as it considers the present value of i
//then saves the sum and adds the new value of i
//example: i += 5 equals i = i +5
	i = i + write(1, &str[i], 1);
	return (1);
}
