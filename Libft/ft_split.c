/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:02:09 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/15 22:32:36 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**out;
	int	*size;
	int	i;

	size = ft_strnchr(s, c);
	if (!size)
		return (NULL);
	out = malloc((size[0] + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	out[size] = '\0';
	i = 1;
	while (i < size[0] + 1)
	{
		pass;
	}

}
