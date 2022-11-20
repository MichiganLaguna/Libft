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

	out = (char *)malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (i < len || *s)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
