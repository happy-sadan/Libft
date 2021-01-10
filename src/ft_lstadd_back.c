/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 10:58:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/10 22:57:20 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *item)
{
	if (!lst || !item)
		return ;
	if (!*lst)
	{
		*lst = item;
		return ;
	}
	ft_lstadd_back(&((*lst)->next), item);
}
