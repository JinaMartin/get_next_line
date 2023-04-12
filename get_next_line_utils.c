/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:00:17 by mjina             #+#    #+#             */
/*   Updated: 2023/04/11 17:00:19 by mjina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	*ft_strchr(const char *str, int i)
{
	while (*str != (char)i && *str != 0)
		str++;
	if (*str == (char)i)
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
    size_t  i;
    size_t  j;

    if (!s1)
    {
        s1 = (char *)malloc(1 * sizeof(char));
        s1[0] = '\0';
    }
	if (!s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
    i = -1;
    j = 0;
	while (s1[++i])
        str[i] = s1[i];
    while (s2[j])
        str[i++] = s2[j++];
    str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
    free (s1);
	return (str);
}
