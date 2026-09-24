/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 20:20:47 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/23 21:34:02 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	read_file(int fd)
{
	char	buffer[1];

	while (read(fd, buffer, 1))
		write(1, buffer, 1);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	read_file(fd);
	close(fd);
	return (0);
}
