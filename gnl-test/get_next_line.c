/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:50:15 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/12/01 11:00:26 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strdup(char *str)
{
	char	*strn;
	size_t	i;

	if (!(strn = (char*)malloc(sizeof(strn) * ft_strlen(str) + 1)))
		return (NULL);
	i = -1;
	while (str[++i])
		strn[i] = str[i];
	strn[i + 1] = '\0';
	return (strn);
}

static int	make_line(char **save, char **line, char *str)
{
	char *tmp;

	if (str != NULL)
	{
		
		*line = ft_strdup(*save);
		tmp = ft_strdup(str + 1);
		free(*save);
		*save = tmp;
		return (1);
	}
	if (*save != NULL)
	{
		*line = *save;
		*save = NULL;
	}
	else
		*line = ft_strdup("");
	return (0);
}

int		get_next_line(int fd, char **line)
{
	static char	*save[256];
	char		buffer[BUFFER_SIZE + 1];
	char		*tmp;
	int			buff_len;
	char		*str;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	while ((str = ft_strchr(save[fd], '\n')) == 0
			&& (buff_len = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[buff_len] = '\0';
		if (!save[fd])
			tmp = ft_strdup(buffer);
		else
			tmp = ft_strjoin(save[fd], buffer);
		if (save[fd] != 0)
			free(save[fd]);
		save[fd] = tmp;
	}
	if (buff_len < 0)
		return (-1);
	return (make_line(&save[fd], line, str));
}
