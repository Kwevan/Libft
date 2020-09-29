/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 12:04:43 by kgouacid          #+#    #+#             */
/*   Updated: 2020/09/02 12:14:30 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin2(char const *s1, const char *s2, char const *s3)
{
	char	*temp;
	char	*res;

	if (!(temp = ft_strjoin(s1, s2)))
		return (NULL);
	res = ft_strjoin(temp, s3);
	free(temp);
	return (res);
}
