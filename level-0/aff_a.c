/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:48:00 by kamako            #+#    #+#             */
/*   Updated: 2019/07/24 12:09:09 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('a');
	else
	{
		while (*argv[1])
		{
			if (*argv[1] == 'a')
			{
				ft_putchar('a');
				break;
			}
			argv[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
