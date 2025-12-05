/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:26:11 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/20 18:51:17 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;

	if (!s)
		return (NULL);
	i = len;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < i)
		i = ft_strlen(s + start);
	sub = malloc(sizeof(char) * (i + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, i + 1);
	return (sub);
}
