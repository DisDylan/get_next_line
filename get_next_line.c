/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:50:15 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/27 14:55:37 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int get_next_line(int fd, char **line)
{
	static char save[1000];
	char *tmp;
	int i;

	i = 0;
	tmp = "";
	if (!fd || !line)
		return (-1);
	if (save[0] == '\0')
	{
		while (read(fd, save, BUFF_SIZE) >= 1)
			i++;
	}
	i = 0;
	if (save[i] == '\0')
	{
		strcpy(*line, save);
		return (0);
	}
	while (save[i] != '\n' || save[i] != '\0')
	{
		tmp[i] = save[i];
		i++;
	}
	strcpy(save, save + i);
	strcpy(*line, tmp);
	return (1);
}
