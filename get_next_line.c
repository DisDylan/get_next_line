/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:50:15 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/27 14:04:28 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	static char *save;
	char *tmp;
	int i;

	i = 0;
	if (!fd || !*line)
		return (-1);
	if (!save)
	{
		while (read(fd, save, BUFF_SIZE))
			i++;
	}
	while (save[i] != '\n')
	{
		tmp[i] = save[i];
		i++;
	}
	save = save + i;
	*line = tmp;
	if (save[i] == '\0')
		return (0);
	return (1);
}
