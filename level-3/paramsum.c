/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:48:48 by kamako            #+#    #+#             */
/*   Updated: 2019/08/19 15:58:21 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		main(int argc, char **argv)
{
	argv = 0;
	putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}
