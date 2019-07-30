/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:01:47 by kamako            #+#    #+#             */
/*   Updated: 2019/07/24 18:25:29 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

void		printnbr(int n)
{
	if (n > 10)
		printnbr(n / 10);
	n = (n % 10 + '0');
	write(1, &n, 1);
}

int		main(void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if((nbr % 5 == 0) && (nbr % 3 == 0))
			ft_putstr("fizzbuzz");
	else if(nbr % 5 == 0)
		ft_putstr("fizz");
	else if (nbr % 3 == 0)
		ft_putstr("buzz");
	else
		printnbr(nbr);
	ft_putchar('\n');
	nbr++;
	}
	return (0);
}
