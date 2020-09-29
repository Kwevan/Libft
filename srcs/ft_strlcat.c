/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:56:56 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/07 13:00:50 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, unsigned int n)
{
	size_t i;

	i = 0;
	while (str[i] && i < n)
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dest_len;

	i = 0;
	dest_len = ft_strnlen(dst, dstsize);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize == dest_len)
		return (ft_strlen(src) + dstsize);
	while (src[i] && ((dest_len + i) < (dstsize - 1)))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
