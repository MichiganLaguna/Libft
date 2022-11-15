/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:04:04 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/15 22:21:41 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	*ft_strnchr(const char *s, int c)
{
	int	i;
	int	j;
	int	*out;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == c)
			i++;
		j++;
	}
	out = malloc((i + 1) * sizeof(int));
	if (!out)
		return (NULL);
	out[0] = i;
	j = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			out[j] = i;
			j++;
		}
		i++;
	}
	return (out);
}
