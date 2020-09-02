/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 20:19:23 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/31 15:40:20 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int **range, int min, int max)
{
	int		*tableau;
	int		i;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	tableau = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	*range = tableau;
	return (i);
}
