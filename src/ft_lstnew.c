/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 14:57:19 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:31 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *data)
{
	t_list	*list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}
