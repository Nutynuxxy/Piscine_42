/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 11:47:52 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/31 15:34:33 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	s = (char *)malloc(sizeof(*s) * (j + 1));
	while (i < j)
	{
		s[i] = src[i];
		i++;
	}
	return (s);
}
