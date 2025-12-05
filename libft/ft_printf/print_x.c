/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:39:45 by guiferre          #+#    #+#             */
/*   Updated: 2024/12/10 16:55:28 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(unsigned long nb)
{
	unsigned int	temp;
	int				i;
	int				count;
	char			hex_number[16];

	i = -1;
	count = 0;
	if (nb == 0)
		return (print_c('0'));
	while (nb != 0)
	{
		temp = nb % 16;
		if (temp < 10)
			temp = temp + '0';
		else
			temp = (temp - 10) + 'a';
		hex_number[++i] = temp;
		nb = nb / 16;
	}
	while (i >= 0)
	{
		print_c(hex_number[i--]);
		count++;
	}
	return (count);
}
