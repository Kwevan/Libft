/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:59:29 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/14 11:01:53 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_src;
	unsigned char	*str_dest;

	i = 0;
	str_src = (unsigned char *)src;
	str_dest = (unsigned char *)dest;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		if (str_src[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
