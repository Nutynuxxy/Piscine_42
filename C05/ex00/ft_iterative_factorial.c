/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 09:27:19 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/24 10:47:57 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
