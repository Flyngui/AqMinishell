/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 19:56:22 by guiferre          #+#    #+#             */
/*   Updated: 2025/02/12 17:17:57 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	ssize_t		bytes;
	char		*line;

	line = NULL;
	bytes = 1;
	while (fd >= 0 && fd < FOPEN_MAX && BUFFER_SIZE > 0 && bytes > 0)
	{
		if (buffer[fd][0])
		{
			line = line_buff_join(line, buffer[fd]);
			if (!line)
				return (NULL);
			if (line[strchr_len(line, '\n') - 1] == '\n')
				break ;
		}
		else
		{
			bytes = read(fd, buffer[fd], BUFFER_SIZE);
			if (bytes < 0)
				return (free(line), NULL);
			buffer[fd][bytes] = '\0';
		}
	}
	return (line);
}
// int	main(void)
// {
// 	int		fd1;
// 	int		fd2;
// 	char	*line;

// 	fd1 = open("test.txt", O_RDONLY);
// 	fd2 = open("123.txt", O_RDONLY);
// 	line = "adc";
// 	while (line)
// 	{
// 		line = get_next_line(fd1);
// 		printf("%s", line);
// 		line = get_next_line(fd2);
// 		printf("%s", line);
// 	}
// 	/* parte do cmanuel-
// 	for (int i = 1; i <= 5; i++)
// 	{
// 		printf("line %i:_%s", i, get_next_line(fd1));
// 		printf("line %i:_%s", i, get_next_line(fd2));
// 	}
// 	*/
// 	close(fd1);
// 	close(fd2);
// }
