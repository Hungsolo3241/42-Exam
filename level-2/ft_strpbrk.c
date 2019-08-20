/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:44:26 by kamako            #+#    #+#             */
/*   Updated: 2019/08/20 15:51:19 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

char		*ft_strpbrk(const char *str1, const char *str2)
{
	char *s1 = (char *)str1;
	char *s2 = (char *)str2;

	while(*s1)
	{
		if (ft_strchr(s2, *s1) != '\0')
			return (s1);
		s1++;
	}
	return(NULL);
}
