/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:10:53 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/09 18:14:03 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (last)
		return (s + last);
	return (NULL);
}
