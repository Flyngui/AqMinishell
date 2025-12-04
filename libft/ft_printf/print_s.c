/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:39:40 by guiferre          #+#    #+#             */
/*   Updated: 2024/12/04 16:57:13 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *str)
{
	int	i;

	if (!str)
		return (print_s("(null)"));
	i = 0;
	while (str[i])
	{
		print_c(str[i]);
		i++;
	}
	return (i);
}
