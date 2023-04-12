/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:14:47 by mjina             #+#    #+#             */
/*   Updated: 2023/04/12 15:14:48 by mjina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    char    *line;
    int     fd;

    fd = open("test.txt", O_RDONLY);
    line = get_next_line(fd);
    printf("%s", line);
    free(line);
    return (0);
}
