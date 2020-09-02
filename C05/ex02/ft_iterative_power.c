/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:20:44 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/21 15:09:28 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int resultat;

	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	resultat = 1;
	while (power > 0)
	{
		resultat = nb * resultat;
		power--;
	}
	return (resultat);
}
