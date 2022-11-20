/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:45:14 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/20 11:41:47 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	int		i;

	i = 0;
	out = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (*s1)
	{
		if (ft_strchr(set, *s1))
		{
			out[i] = *s1;
			i++;
		}
		s1++;
	}
	out[i] = '\0';
	return (out);
}
