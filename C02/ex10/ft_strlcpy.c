/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 16:30:43 by mcoet             #+#    #+#             */
/*   Updated: 2020/08/17 15:46:57 by mcoet            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	a = 0;
	c = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < size)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	while (src[c] != '\0')
		c++;
	return (c);
}
