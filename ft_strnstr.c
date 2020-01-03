/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:39:44 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/07 10:25:40 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s2[i])
	{
		if ((s1[i] != s2[i]) || i >= n)
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0]
				&& find(haystack + i + 1, needle + 1, len - i - 1))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
