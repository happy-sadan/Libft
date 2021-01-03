/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:28:16 by trcottam          #+#    #+#             */
/*   Updated: 2021/01/02 22:34:11 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_next_line(int fd, char **line)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	size_t		buffer_len;

	if (!line || BUFFER_SIZE <= 0 || read(fd, buffer[fd], 0) == -1 ||
			!(*line = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	*line[0] = '\0';
	ft_strcpy(*line, buffer[fd]);
	while (!ft_strchr(*line, '\n') &&
			(buffer_len = read(fd, buffer[fd], BUFFER_SIZE)))
	{
		buffer[fd][buffer_len] = '\0';
		if (!(ft_strappend(line, buffer[fd])))
			return (-1);
	}
	if (!ft_strchr(buffer[fd], '\n'))
	{
		buffer[fd][0] = '\0';
		return (0);
	}
	ft_strcpy(buffer[fd], ft_strchr(buffer[fd], '\n') + 1);
	ft_strchr(*line, '\n') ? *ft_strchr(*line, '\n') = '\0' : 0;
	return (1);
}