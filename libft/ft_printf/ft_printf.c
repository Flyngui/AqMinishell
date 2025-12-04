/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:51:20 by guiferre          #+#    #+#             */
/*   Updated: 2024/12/04 18:52:54 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_print(va_list ap, char type)
{
	if (type == 'c')
		return (print_c(va_arg(ap, int)));
	else if (type == 's')
		return (print_s(va_arg(ap, char *)));
	else if (type == 'p')
		return (print_p(va_arg(ap, void *)));
	else if (type == 'd' || type == 'i')
		return (print_di(va_arg(ap, int)));
	else if (type == 'u')
		return (print_u(va_arg(ap, unsigned int)));
	else if (type == 'x')
		return (print_x(va_arg(ap, unsigned int)));
	else if (type == 'X')
		return (print_xbig(va_arg(ap, unsigned int)));
	else if (type == '%')
		return (print_c('%'));
	else if (type)
		print_c(type);
	return (0);
}

static int	type_check(va_list ap, const char *type)
{
	int	count;

	count = 0;
	while (*type)
	{
		if (*type == '%')
		{
			type++;
			if (*type == '\0')
				return (count);
			count += type_print(ap, *type);
		}
		else
		{
			print_c(*type);
			count++;
		}
		type++;
	}
	return (count);
}

int	ft_printf(const char *type, ...)
{
	va_list	ap;
	int		count;

	if (!type)
		return (-1);
	va_start(ap, type);
	count = type_check(ap, type);
	va_end(ap);
	return (count);
}
