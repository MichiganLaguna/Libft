/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:11:09 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/20 12:29:01 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		len = 0;
	i = 0;
	out = ft_calloc(len + 1, sizeof(char));
	if (out)
	{
		while (i < len && s[start + i])
		{
			out[i] = s[start + i];
			i++;
		}
	}
	return (out);
}
