/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:37:27 by trcottam          #+#    #+#             */
/*   Updated: 2020/01/30 13:27:56 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoalen(long n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long	n_long;
	size_t	itoa_len;
	char	*itoa;
	size_t	i;

	n_long = n;
	itoa_len = ft_itoalen(n);
	if (!(itoa = malloc(sizeof(char) * (itoa_len + 1))))
		return (NULL);
	if (n_long == 0)
		itoa[0] = '0';
	else if (n_long < 0)
	{
		n_long *= -1;
		itoa[0] = '-';
	}
	i = itoa_len - 1;
	while (n_long)
	{
		itoa[i] = n_long % 10 + '0';
		n_long /= 10;
		i--;
	}
	itoa[itoa_len] = '\0';
	return (itoa);
}
