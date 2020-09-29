/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:22:17 by kgouacid          #+#    #+#             */
/*   Updated: 2020/08/31 11:22:33 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(char *s, long len)
{
	char *temp;
	long i;

	i = 0;
	temp = NULL;
	temp = (char *)malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	temp[len] = '\0';
	while (i < len)
	{
		temp[i] = s[i];
		i++;
	}
	return (temp);
}
