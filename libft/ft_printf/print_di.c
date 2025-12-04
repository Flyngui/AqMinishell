/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:39:32 by guiferre          #+#    #+#             */
/*   Updated: 2024/12/03 22:17:43 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_di(int temp, int count)
{
	int	i;
	int	digit;
	int	arr[10];

	i = 0;
	while (temp != 0)
	{
		digit = temp % 10;
		if (digit < 0)
			digit *= -1;
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

int	print_di(int nb)
{
	int	temp;
	int	count;

	count = 0;
	if (nb == 0)
	{
		print_c('0');
		return (1);
	}
	temp = nb;
	if (temp < 0)
	{
		print_c('-');
		count++;
	}
	count = ft_print_di(temp, count);
	return (count);
}
