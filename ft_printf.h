/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:02:05 by abartell          #+#    #+#             */
/*   Updated: 2022/07/22 12:11:48 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_character(int c);
int	ft_string(char *str);
int ft_printnbr(int min);
int ft_lc_hexa_deci(unsigned int hex);
int ft_uc_hexa_deci(unsigned int max);
// void ft_putchar_fd(char c, int fd);

#endif
