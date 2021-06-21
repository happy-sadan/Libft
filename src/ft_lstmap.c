/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:58:11 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 17:40:57 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstmap;
	t_list	*lst_current;

	if (!lst || !f)
		return (NULL);
	lstmap = NULL;
	while (lst)
	{
		lst_current = ft_lstnew((*f)(lst->data));
		if (!lst_current)
		{
			ft_lstclear(&lstmap, del);
			return (NULL);
		}
		ft_lstadd_back(&lstmap, lst_current);
		lst = lst->next;
	}
	return (lstmap);
}
