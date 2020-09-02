/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 11:33:27 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/16 11:33:31 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char negatif;
	char positif;

	negatif = 'N';
	positif = 'P';
	if (n < 0)
	{
		write(1, &negatif, 1);
	}
	else
	{
		write(1, &positif, 1);
	}
}
