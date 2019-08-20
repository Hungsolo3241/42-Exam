/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:22:45 by kamako            #+#    #+#             */
/*   Updated: 2019/08/19 17:14:48 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	integer;
	int dividend;

	dividendd = 128;
	integer = octet;
	while (dividend != 0)
	{
		if (dividend <= integer)
		{
			write(1, "1", 1);
			integer = integer % dividend;
		}
		else
			write(1, "0", 1);
		dividend = dividend / 2;
	}
}
