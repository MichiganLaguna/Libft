/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:58:01 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/09 18:02:14 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	out;

	i = 0;
	out = ft_strlen(dst);
	while (i < size - 1 || src[i])
	{
		dst[out + i] = src[i];
	}
	dst[out + i] = '\0';
	return (out + ft_strlen(src));
}
