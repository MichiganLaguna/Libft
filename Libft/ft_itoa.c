/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:21:06 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/20 11:43:50 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_power(int i, unsigned int n)
{
	int	pow;

	if (n == 0)
		return (1);
	pow = ft_power(i, n / 2);
	if (n & 1)
		return (i * pow * pow);
	return (pow * pow);
}

static int	ft_itoa_size_str(long n, int base)
{
	if (n < 0)
		return (1 + ft_itoa_size_str(-n, base));
	if (n / base == 0)
		return (1);
	return (1 + ft_itoa_size_str(n / base, base));
}

char	*ft_itoa(int n)
{
	char	*out;
	int		size;
	int		i;

	size = ft_itoa_size_str(n, 10);
	out = ft_calloc(size + 1, sizeof(char));
	if (!out)
		return (out);
	i = 0;
	if (n < 0)
	{
		out[i] = '-';
		size--;
		i++;
	}
	while (i < size)
	{
		out[i] = n / ft_power(10, size - i - 1) % 10;
		i++;
	}
	return (out);
}
