/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:39:42 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/28 20:20:37 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_u(unsigned int temp, int count)
{
	int	i;
	int	digit;
	int	arr[10];

	i = 0;
	while (temp != 0)
	{
		digit = temp % 10;
		arr[i] = digit;
		temp = temp / 10;
		i++;
	}
	while (i > 0)
	{
		print_c(arr[--i] + '0');
		count++;
	}
	return (count);
}

int	print_u(unsigned int nb)
{
	unsigned int	temp;
	int				count;

	count = 0;
	if (nb == 0)
	{
		print_c('0');
		return (1);
	}
	temp = nb;
	count = ft_print_u(temp, count);
	return (count);
}
