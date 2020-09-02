/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:20:34 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/15 15:40:47 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_int(int i)
{
	print_char(48 + i);
}

void	pretty_print(int left, int right)
{
	print_int(left / 10);
	print_int(left % 10);
	print_char(' ');
	print_int(right / 10);
	print_int(right % 10);
	if (left != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	second = 1;
	while (first < 99)
	{
		while (second < 100)
		{
			pretty_print(first, second);
			second++;
		}
		first++;
		second = first + 1;
	}
}
