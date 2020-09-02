/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:43:36 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/28 10:16:09 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*tableau;
	int		i;

	if (min >= max)
		return (0);
	if (!(tableau = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	return (tableau);
}
