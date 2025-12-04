/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:28:33 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/20 18:51:13 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setcheck(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*strim;
	char		*start;
	char		*end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && setcheck(*start, set))
		start++;
	while (start < end && setcheck(*(end - 1), set))
		end--;
	strim = ft_substr(start, 0, end - start);
	return (strim);
}
