/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   original_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:58:39 by abartell          #+#    #+#             */
/*   Updated: 2022/07/04 21:21:33 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//usage of the printf function

#include <stdio.h>

int	main(void)
{
	int	ch;

	ch = 75;

	while (ch <= 100)
	{
		printf("ASCII value = %d, Character = %c\n", ch, ch);
		ch++;
	}

	return (0);
}

//printf can take a variable amount of arguments and give an output for that
//in this example printf has the two arguments of ASCII value and character
//and gives an output for them in the terminal when executed
//it increments the value of ch by 1 with each loop it goes through
//and then gives the ASCII output combined with the character