/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 12:12:20 by houlekhi          #+#    #+#             */
/*   Updated: 2014/11/22 14:02:28 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int 		main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while (get_next_line(fd, &line) != 0)
		printf("%s\n", line);
	printf("%s\n", line);
	close(fd);
	return (0);
}
