/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:54:50 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/13 13:43:59 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_special(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f') ? 1 : 0);
}

static int	is_sign(char c)
{
	return ((c == '+' || c == '-') ? 1 : 0);
}

static int	is_number(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

int			ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (is_special(nptr[i]))
		i++;
	if (is_sign(nptr[i]))
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] && is_number(nptr[i]))
	{
		nb = nb * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * nb);
}
