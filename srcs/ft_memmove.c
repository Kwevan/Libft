/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:00:09 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/12 11:54:06 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (!src && !dest)
		return (NULL);
	s = (char *)src;
	d = (char *)dest;
	if (s < d)
		while (n-- > 0)
			d[n] = s[n];
	else
		ft_memcpy(d, s, n);
	return (dest);
}
