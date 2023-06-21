/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:00:17 by mjina             #+#    #+#             */
/*   Updated: 2023/06/21 14:42:24 by mjina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *string, int c)
{
	int			i;
	const char	*ptr;

	if (string == NULL)
		return (NULL);
	i = 0;
	ptr = string;
	while (ptr[i])
	{
		if (ptr[i] == (char) c)
			return ((char *)&ptr[i]);
		i++;
	}
	if (ptr[i] == (char)c)
		return ((char *)&ptr[i]);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		ptr[i] = s1[i];
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free (s1);
	return (ptr);
}

char	*ft_get_single_line(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	ptr = (char *)malloc((i + 2) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
