/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_strpbrk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:51:36 by kamako            #+#    #+#             */
/*   Updated: 2019/08/20 16:13:50 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while(s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *pch;

		pch = ft_strpbrk(argv[1], argv[2]);
		printf("Characters in |%s|: ", argv[1]);
		while (pch != NULL)
		{
			printf("%c ", *pch);
			pch = ft_strpbrk(pch + 1, argv[2]);
		}
		printf("\n");
	}
	return (0);
}
