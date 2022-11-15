/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:27:09 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/09 16:29:55 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, site_t n)
{
	(char *)dest;
	(const char *)src;
	while (n)
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}
