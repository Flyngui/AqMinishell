/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:54:56 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/20 18:49:56 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(char *str, char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!str && !n)
		return (0);
	if (find[0] == '\0' || find == str)
		return (str);
	i = 0;
	while (i <= n && str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == find[j] && (i + j) < n)
		{
			if (str[i + j] == '\0' && find[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
