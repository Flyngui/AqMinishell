/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:49:28 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/20 18:49:08 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*end;
	char	*start;

	if (!src && !dest)
		return (dest);
	end = (char *) dest;
	start = (char *) src;
	while (n >= 1)
	{
		*end = *start;
		end++;
		start++;
		n--;
	}
	return (dest);
}
