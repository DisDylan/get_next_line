/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu </var/mail/dpoinsu>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:40:33 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/26 19:22:10 by dpoinsu          ###   ########.fr       */
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
