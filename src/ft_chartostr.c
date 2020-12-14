/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chartostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:19:28 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/14 18:31:04 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chartostr(char c)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * 2)))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
