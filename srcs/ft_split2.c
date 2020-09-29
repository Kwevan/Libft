/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:29:12 by kgouacid          #+#    #+#             */
/*   Updated: 2020/09/04 12:15:37 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen2(char **s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int		ft_is_in_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_word(char *str, char *charset)
{
	int	i;
	int	nb;
	int	bl;

	i = 0;
	nb = 0;
	while (str[i])
	{
		bl = 0;
		while (ft_is_in_str(str[i], charset) && str[i])
			i++;
		while (!ft_is_in_str(str[i], charset) && str[i])
		{
			nb += (bl ? 0 : 1);
			bl = 1;
			i++;
		}
	}
	return (nb);
}

char	*ft_cut_word(char *str, char *charset, int *i)
{
	int		j;
	int		len;
	char	*strnew;

	j = 0;
	len = 0;
	while (ft_is_in_str(str[*i], charset) && str[*i])
		*i += 1;
	while (!ft_is_in_str(str[*i + len], charset) && str[*i + len])
		len++;
	if (!(strnew = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (j < len)
	{
		strnew[j] = str[*i];
		j++;
		*i += 1;
	}
	strnew[j] = '\0';
	return (strnew);
}

char	**ft_split2(char *str, char *charset)
{
	int		i;
	char	**dest;
	int		j;
	int		dest_size;

	i = 0;
	j = 0;
	dest_size = ft_count_word(str, charset);
	if (!(dest = malloc(sizeof(char *) * (dest_size + 1))))
		return (NULL);
	while (i < dest_size)
	{
		dest[i] = ft_cut_word(str, charset, &j);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
