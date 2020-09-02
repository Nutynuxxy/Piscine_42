/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 11:35:26 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/28 09:51:37 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	if (to_find[0] == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] != '\0')
		{
			if (str[a + b] != to_find[b])
				break ;
			b++;
		}
		if (to_find[b] == '\0')
			return (str + a);
		a++;
	}
	return (0);
}
