/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eli-x <yxiong@student.42adel.org.au>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:14:52 by eli-x             #+#    #+#             */
/*   Updated: 2021/11/18 21:20:21 by eli-x            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*read_buffer(int fd, char *res)
{
	int		byte_read;
	char	*buffer;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	byte_read = 1;
	while (byte_read != 0 && gnl_strchr(res, '\n') == NULL)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[byte_read] = '\0';
		res = gnl_strjoin(res, buffer);
	}
	free(buffer);
	return (res);
}

char	*get_the_line(char *buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*load_the_rest(char *buffer)
{
	int		i;
	int		j;
	char	*rest;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	rest = malloc(gnl_strlen(buffer) - i + 1);
	if (!rest)
		return (NULL);
	i++;
	while (buffer[i])
		rest[j++] = buffer[i++];
	rest[j] = '\0';
	free(buffer);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || (read(fd, 0, 0) < 0))
		return (NULL);
	buffer[fd] = read_buffer(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = get_the_line(buffer[fd]);
	buffer[fd] = load_the_rest(buffer[fd]);
	return (line);
}
