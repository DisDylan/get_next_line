/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu </var/mail/dpoinsu>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:04:33 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/27 14:15:26 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char *line;
	int fd;

	fd = open("file.txt", O_RDONLY);
	printf("%d", get_next_line(fd, &line));
	printf("%s", line);
}
