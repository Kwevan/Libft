/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:59:04 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/12 15:07:24 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		get_digit(int n)
{
	return ("0123456789"[n]);
}

static int		ft_int_len(int nb)
{
	int i;

	i = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nb;

	nb = (unsigned int)n;
	len = ft_int_len(nb);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len] = get_digit(nb % 10);
		nb = nb / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
