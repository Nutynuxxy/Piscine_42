/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:46:39 by mcoet             #+#    #+#             */
/*   Updated: 2020/09/01 11:12:42 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
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

void	ft_show_tab(struct s_stock_str *tab)
{
	int				i;
	t_stock_str		temp;

	i = 0;
	while (((t_stock_str*)tab)[i].str)
	{
		temp = ((t_stock_str*)tab)[i];
		ft_putstr(temp.str);
		ft_putstr("\n");
		ft_putnbr(temp.size);
		ft_putstr("\n");
		ft_putstr(temp.copy);
		ft_putstr("\n");
		i++;
	}
}
