/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 19:56:26 by guiferre          #+#    #+#             */
/*   Updated: 2025/02/12 17:17:45 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	strchr_len(char *str, char chr)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != chr)
		i++;
	if (str[i] == '\n' && chr == '\n')
		i++;
	return (i);
}

char	*line_buff_join(char *line, char *buff)
{
	char	*str;
	size_t	lenline;
	size_t	lenbuff;
	size_t	i;

	lenline = strchr_len(line, '\0');
	lenbuff = strchr_len(buff, '\n');
	str = malloc(lenline + lenbuff + 1);
	if (!str)
		return (NULL);
	str[lenline + lenbuff] = '\0';
	i = -1;
	while (++i < lenline)
		str[i] = line[i];
	i = -1;
	while (++i < lenbuff)
		str[lenline + i] = buff[i];
	free(line);
	i = -1;
	while (buff[lenbuff + ++i])
		buff[i] = buff[lenbuff + i];
	buff[i] = '\0';
	return (str);
}
