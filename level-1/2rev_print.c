/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2rev_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:50:46 by kamako            #+#    #+#             */
/*   Updated: 2019/07/29 15:29:12 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	}
		ft_putchar('\n');
	return (0);
}
