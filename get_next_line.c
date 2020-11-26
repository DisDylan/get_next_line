/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:50:58 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/26 19:51:01 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	get_next_line(int fd, char **line)
{
	static void *str;
	char		*tmp;

	i = 0;
	if (str[i] != '\0')
	{
		i = ft_strlen(str);
		*line = (char*)str;
		str = str + i;
	}
	while (fd && read(fd, str, BUFFER_SIZE) == 1)
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == '\n')
			{
				strncpy(tmp, str, i);
				strcat(line, tmp);
				str = str + i;
			}
			i++;
		}
	}
}
