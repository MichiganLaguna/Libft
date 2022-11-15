/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:57:14 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/15 21:31:06 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*strdup(const char *s)
{
	char	*out;
	int	length;

	length = ft_strlen(s);
	out = malloc((length + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (length > -1)
	{
		out[length] = s[length];
		length--;
	}
	return (out);
}
