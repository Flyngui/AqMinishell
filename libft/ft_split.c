/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:29:58 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/20 18:49:27 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	totallenght(const char *s, char c)
{
	size_t	lenght;

	lenght = 0;
	while (*s)
	{
		if (*s != c)
		{
			lenght++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (lenght);
}

static void	free_split(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
}

static char	**ft_split_logic(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	lenght;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			lenght = 0;
			while (*s && *s != c && ++lenght)
				++s;
			arr[i] = ft_substr(s - lenght, 0, lenght);
			if (!arr[i++])
			{
				free_split(arr, i - 1);
				return (NULL);
			}
		}
		else
			s++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (totallenght(s, c) + 1));
	if (!arr)
		return (NULL);
	return (ft_split_logic(s, c, arr));
}
