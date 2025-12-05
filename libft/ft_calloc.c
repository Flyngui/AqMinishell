/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:29:03 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/20 18:48:46 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void		*arr;

	if (size != 0 && n > (size_t)-1 / size)
		return (NULL);
	arr = malloc(size * n);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * n);
	return (arr);
}
