/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:34:09 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/20 18:11:23 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int a;

	if (nb >= 0)
		a = nb;
	if (nb < 0)
	{
		a = (nb * -1);
		ft_putchar('-');
	}
	if (a >= 10)
		ft_putnbr(a / 10);
	ft_putchar((a % 10) + '0');
}
