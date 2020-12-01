/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:51:12 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/12/01 10:30:54 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 32

int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
void	*ft_strcpy(char *dest, char *src);
void	*ft_strcat(char *dest, char *src);
char	*ft_strjoin(char *s1, char *s2);

#endif
