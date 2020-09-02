/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:13:57 by mcoet             #+#    #+#             */
/*   Updated: 2020/09/01 10:44:31 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strl(char **strs, int size)
{
	int i;
	int p;

	i = 0;
	p = 0;
	if (size == 0)
		return (0);
	while (i < size)
		p += ft_strlen(strs[i++]);
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;

	i = 0;
	while (dest[i])
		i++;
	while(*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *dest, char *src)
{
	char	*r
	int		len;
	int		i;

	if (size <= 0 || !sep || !strs)
	{
		r = malloc(sizeof(char));
		r[0] = '\0';
		return (r);
	}
	len = ft_strlen(sep) * (size - 1) + ft_strl(strs, size) + 1;
	r = malloc(sizeof(char) * len);
	if (!r)
		return (0);
	r[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(r, strs[i++]);
		if (i < size)
			ft_strcat(r, sep);
	}
	r[len - 1] = '\0';
	return (r);
