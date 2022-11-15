/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:34:17 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/11 17:41:20 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	out;

	out = 0;
	sign = -1;
	while (*nptr > 9 && *nptr < 14)
		nptr++;
	if (*nptr == '+')
		sign = 1;
	else if (*nptr == '-')
		sign = -1;
	while (*nptr > 47 && *nptr < 58)
	{
		out += *nptr;
		nptr++;
	}
	return (out * sign);
}
