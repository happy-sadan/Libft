/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 10:17:37 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/10 22:58:07 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *item)
{
	if (!lst || !item)
		return ;
	if (!*lst)
	{
		*lst = item;
		return ;
	}
	item->next = *lst;
	*lst = item;
}
