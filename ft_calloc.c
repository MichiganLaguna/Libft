/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <nriviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:53:08 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/29 12:46:25 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*ptr;

	if (!n)
		return (malloc(0));
	if (nmemb * n / n != nmemb)
		return (0);
	ptr = malloc(nmemb * n);
	if (ptr)
		ft_bzero(ptr, nmemb * n);
	return (ptr);
}
