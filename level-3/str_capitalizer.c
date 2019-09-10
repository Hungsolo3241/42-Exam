/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:52:23 by kamako            #+#    #+#             */
/*   Updated: 2019/09/10 13:59:20 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		str_capitalizer(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == '\t' || s[i - 1] == ' ' || s[i - 1] == '\0'))
			s[i] -= 32;
		i++;
	}
	write(1, s, i);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int	i = 1;
	if (argc > 1)
	{
		while (argc > i)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
