/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2wdmatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:09:45 by kamako            #+#    #+#             */
/*   Updated: 2019/08/20 14:23:56 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		wdmatch(char *s1, char *s2)
{
	int len = 0;
	int i = 0;

	while(s1[len])
		len++;
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? i++ : 0;
	if (i == len)
		write(1, s1, len);
}

int		main(int argc, char **argv)
{
	 if (argc == 3)
	 	 wdmatch(argv[1], argv[2]);
	 write(1, "\n", 1);
	 return (0);
}
