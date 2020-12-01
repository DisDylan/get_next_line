/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:12:33 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/12/01 09:55:23 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (*str)
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	size_t i;

	i = 0;
	if (!str)
		return (NULL);
	if (c == 0)
		return ((char*)str);
	while (*str)
	{
		if (str[i] == (unsigned char)c)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}

void	*ft_strcpy(char *dest, char *src)
{
	size_t i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
}

void	*ft_strcat(char *dest, char *src)
{
	size_t i;
	size_t j;

	i = -1;
	j = ft_strlen(dest);
	while (src[++i])
		dest[++j] = src[i];
}

char	*ft_strjoin(char *s1, char *s2)
{
	char *str;

	if (!s1 && !s2)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(str) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	str[ft_strlen(str) + 1] = '\0';
	return (str);
}
