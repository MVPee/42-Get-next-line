/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:06:55 by mvpee             #+#    #+#             */
/*   Updated: 2023/10/19 19:36:46 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
int main(int ac, char **av)
{
    int fd;

    if(ac != 2)
    {
        printf("Invalid args\n");
        return 1;
    }
    fd = open(av[1], O_RDONLY);
	if (fd != 3)
	{
		printf("Cannot read file.\n");
		return (1);
	}
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
    return (0);
}