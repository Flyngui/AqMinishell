/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:26:55 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/20 18:49:49 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			lenght;
	char			*str;

	if (!s || !f)
		return (NULL);
	lenght = ft_strlen(s);
	str = malloc(sizeof(char) * lenght + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
