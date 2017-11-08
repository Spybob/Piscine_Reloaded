/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:33:30 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/07 18:25:47 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	read_write_file(int fd)
{
	char buf;

	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
}

int		main(int argc, char *argv[])
{
	int fd;

	fd = 0;
	if (argc != 2)
	{
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		if (argc < 2)
			write(1, "File name missing.\n", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	read_write_file(fd);
	close(fd);
	return (0);
}
