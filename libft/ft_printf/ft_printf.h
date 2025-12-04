/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:51:25 by guiferre          #+#    #+#             */
/*   Updated: 2024/12/10 16:55:30 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *type, ...);
int	print_c(char c);
int	print_di(int nb);
int	print_p(void *ptr);
int	print_s(char *str);
int	print_u(unsigned int nb);
int	print_x(unsigned long nb);
int	print_xbig(unsigned long nb);

#endif
