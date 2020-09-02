/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 14:45:26 by mcoet             #+#    #+#             */
/*   Updated: 2020/09/01 10:57:20 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char					*ft_strdup(char *src)
{
	int				i;
	int				j;
	char			*s;

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

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*s;

	s = malloc((ac + 1) * sizeof(t_stock_str));
	if (!s)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
		i++;
	}
	s[i].size = 0;
	s[i].str = 0;
	s[i].copy = 0;
	return ((struct s_stock_str*)s);
}
