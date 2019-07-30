/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:37:10 by kamako            #+#    #+#             */
/*   Updated: 2019/07/29 16:31:35 by kamako           ###   ########.fr       */
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
	if(argc == 2)
	{
		while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		{
			ft_putchar(argv[1][i]);
			i++;	
		}
	}
	ft_putchar('\n');
	return (0);
}
