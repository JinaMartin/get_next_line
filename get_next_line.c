/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:20:50 by mjina             #+#    #+#             */
/*   Updated: 2023/03/29 16:20:52 by mjina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_read(int fd, char *str)
{
    char    *buffer;
    int     bytes;

    buffer = (char *)malloc((BUFFERSIZE + 1) * sizeof(char));
    if (!buffer)
        return (NULL);
    bytes = 1;
    while (bytes != 0)// && !ft_strchr(str, '\n'))
    {
        bytes = read(fd, buffer, BUFFERSIZE);
        if (bytes == -1)
        {
            free(buffer);
            return (NULL);
        }
        buffer[bytes] = '\0';
        str = ft_strjoin(str, buffer);
    }
    free(buffer);
    return(str);
}

char    *get_next_line(int fd)
{
    static char *str;
    char        *line;

    if (fd < 0 || BUFFERSIZE <= 0)
        return (0);
    str = ft_read(fd, str);
    if (!str)
        return (NULL);
    return (line);
}
