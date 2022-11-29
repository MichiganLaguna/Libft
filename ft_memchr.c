/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:49:26 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/23 12:32:00 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_t;
	size_t			i;

	s_t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_t[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
