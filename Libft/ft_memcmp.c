/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:54:10 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/11 17:21:34 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned const char	s1_t;
	unsigned const char	s2_t;

	i = 0;
	s1_t = s1;
	s2_t = s2;
	while (i < n && s1_t[i] == s2_t[i])
		i++;
	return (s1_t[i] - S2_t[i]);
}
