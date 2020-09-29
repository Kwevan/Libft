/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgouacid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:01:12 by kgouacid          #+#    #+#             */
/*   Updated: 2019/11/15 14:00:55 by kgouacid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *lcurr;
	t_list *lnext;

	if (!lst || !del)
		return ;
	lcurr = *lst;
	lnext = lcurr->next;
	while (lnext)
	{
		ft_lstdelone(lcurr, del);
		lcurr = lnext;
		lnext = lnext->next;
	}
	ft_lstdelone(lcurr, del);
	*lst = NULL;
}
