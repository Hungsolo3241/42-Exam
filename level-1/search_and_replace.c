/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:44:25 by kamako            #+#    #+#             */
/*   Updated: 2019/08/12 18:13:55 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_destroy(char *str, char one, char two)
{
	while(*str)
	{
		if(*str == one)
			ft_putchar(two);
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(!argv[2][1] && !argv[3][1])
		{
				ft_destroy(argv[1], argv[2][0], argv[3][0]);
		}
	}
	ft_putchar('\n');
	return (0);
}
