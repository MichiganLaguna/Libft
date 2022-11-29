/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriviere <nriviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:10:53 by nriviere          #+#    #+#             */
/*   Updated: 2022/11/29 12:49:51 by nriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	last = -1;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			last = i;
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		last = i;
	if (last > -1)
		return ((char *)s + last);
	return (0);
}
