/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:17:05 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/08 11:17:33 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_dest(char *dest, char const *s1, char const *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	dest_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	dest_len = ft_strlen(s1) + ft_strlen(s2);
	if (dest_len == 0)
		return (ft_strdup(""));
	if (!(dest = (char *)malloc(sizeof(char) * (dest_len + 1))))
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	dest = fill_dest(dest, s1, s2);
	return (dest);
}
