/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:07:25 by kamako            #+#    #+#             */
/*   Updated: 2019/08/12 14:21:51 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if((argv[1][i] >= 'A' && argv[1][i] <= 'Y')|| (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
				argv[1][i] += 1;
			else if(argv[1][i] == 'Z' || argv[1][i] == 'z')
				argv[1][i] -= 25;
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
		return (0);
	}
}
