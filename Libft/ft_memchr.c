/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:49:26 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/20 12:06:58 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*s_t;
	size_t				i;

	s_t = s;
	i = 0;
	while (i < n)
	{
		if (s_t[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
