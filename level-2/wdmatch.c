/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:20:29 by kamako            #+#    #+#             */
/*   Updated: 2019/08/19 15:29:07 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac != 3)
	{
		ft_putchar('\n');
	}
	else
	{
		while(av[1][i] != '\0' && av[2][j] != '\0')
		{
			if (av[1][i] == av[2][j])
			{
				i++;
				j++;
			}
			else
				j++;
		}
		if(av[1][i] == '\0')
		{
			i = 0;
			while(av[1][i] != '\0')
			{
				ft_putchar(av[1][i]);
				i++;
			}
		}
		ft_putchar('\n');
	}
	return (0);
}
