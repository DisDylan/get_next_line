/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbascaul <nbascaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 21:15:12 by nbascaul          #+#    #+#             */
/*   Updated: 2020/11/25 15:42:27 by nbascaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	if (s == 0)
		return (0);
	i = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	size_t		i;

	if (dst == 0 && src == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*newstr;
	size_t			len_s1;
	size_t			len_s2;

	if (!s1 && !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strncpy(newstr, s1, len_s1);
	ft_strncpy(newstr + len_s1, s2, len_s2);
	newstr[len_s1 + len_s2] = '\0';
	return (newstr);
}

char	*ft_strndup(char *s, size_t len)
{
	char		*res;

	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strncpy(res, s, len);
	res[len] = '\0';
	return (res);
}
