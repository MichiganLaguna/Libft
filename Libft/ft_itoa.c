/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:21:06 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/23 18:41:44 by nriviere         ###   ########.fr       */
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
	if (n / base == 0)
		return (1);
	return (1 + ft_itoa_size_str(n / base, base));
}
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*out;
	int		size;
	int		i;
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d:", ft_atoi(argv[1]));
	printf("%s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}
