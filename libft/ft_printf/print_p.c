/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:39:37 by guiferre          #+#    #+#             */
/*   Updated: 2024/12/10 16:34:41 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr)
{
	int	count;

	if (!ptr)
		return (print_s("(nil)"));
	count = print_s("0x") + print_x((unsigned long)ptr);
	return (count);
}
