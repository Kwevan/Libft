/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:00:20 by kgouacid          #+#    #+#             */
/*   Updated: 2020/08/14 12:04:19 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	size++;
	str = (char *)malloc(sizeof(char) * (size));
	if (!str)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
