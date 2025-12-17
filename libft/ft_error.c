/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:27:33 by guiferre          #+#    #+#             */
/*   Updated: 2025/05/13 20:34:20 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// return error
size_t	ft_error(char *message)
{
	if (!message)
		return (ft_error("Error²"));
	ft_putstr_fd("ERROR:", 2);
	ft_putstr_fd(message, 2);
	ft_putstr_fd("\n", 2);
	return (ft_strlen(message));
}
