/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 23:02:42 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/14 18:51:16 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpad(char **str, char c, size_t len, bool end)
{
	char	*new_str;
	size_t	str_len;
	size_t	pad_len;
	char	*str_start;
	char	*pad_start;

	str_len = ft_strlen(*str);
	len = (len >= str_len ? len : str_len);
	pad_len = len - str_len;
	if (!(new_str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str_start = new_str + (end ? 0 : pad_len);
	pad_start = new_str + (end ? str_len : 0);
	ft_strcpy(str_start, *str);
	ft_memset(pad_start, c, pad_len);
	new_str[len] = '\0';
	free(*str);
	*str = new_str;
	return (*str);
}
