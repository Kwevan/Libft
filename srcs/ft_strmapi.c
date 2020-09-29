/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:25:54 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/12 10:50:42 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!(dest = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	dest[i] = '\0';
	i = 0;
	while (i < ft_strlen((s)))
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
