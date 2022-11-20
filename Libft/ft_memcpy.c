/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:27:09 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/20 12:39:44 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_t;
	unsigned const char	*src_t;

	dest_t = dest;
	src_t = src;
	while (n)
	{
		dest_t[n] = src_t[n];
		n--;
	}
	return (dest);
}
