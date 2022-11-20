/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:53:08 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/20 11:35:23 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*ptr;

	if ((double)(nmemb + n) / 2 > 15731.6129815)
		return (0);
	ptr = malloc(nmemb * n);
	ft_bzero(ptr, nmemb * n);
	return (ptr);
}
