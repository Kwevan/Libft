/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:29:12 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/13 11:20:27 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_strlenlen(char *s, char c)
{
	int i;
	int len;

	len = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			len++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (len);
}

static char	**work(char **dest, char *s, char c)
{
	int start;
	int i;
	int dest_i;

	i = 0;
	start = 0;
	dest_i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (!(dest[dest_i] = ft_substr(s, start, i - start)))
				return (NULL);
			while (s[i] == c)
				i++;
			start = i;
			dest_i++;
		}
		i++;
	}
	dest[dest_i] = ft_substr(s, start, (i - start));
	return (dest);
}

char		**ft_split(const char *s, char c)
{
	char	*s1;
	char	**dest;
	int		len;
	char	c1[1];

	c1[0] = c;
	s1 = ft_strtrim(s, c1);
	if (!s1)
		return (NULL);
	len = ft_strlenlen((char *)s1, c);
	if (!(dest = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	if (s1[0] == '\0')
		dest[0] = NULL;
	else
	{
		dest = work(dest, (char *)s1, c);
		dest[len] = NULL;
	}
	return (dest);
}
