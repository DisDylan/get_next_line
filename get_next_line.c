/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu </var/mail/dpoinsu>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:40:33 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/26 16:11:08 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	get_next_line(int fd, char **line)
{
	static void *str;

	i = 0;
	while (fd, ((str = read(fd, str, BUFFER_SIZE)) == 1))
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == '\n')
			{
				strncpy(*line, str, i);
				
			}
			i++;
		}
	}
}
