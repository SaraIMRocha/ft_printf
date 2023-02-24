/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:34:57 by sara              #+#    #+#             */
/*   Updated: 2023/02/24 16:27:00 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putvar(va_list arg, const char str, int *len)

{
	if (str == '%')
		ft_putchar('%', len);
	else if (str == 'c')
		ft_putchar((char)va_arg(arg, int), len);
	else if (str == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (str == 'p')
		ft_putptr(va_arg(arg, void *), len);
	else if ((str == 'd') || (str == 'i'))
		ft_putnbr(va_arg(arg, int), len);
	else if (str == 'u')
		ft_putunsnbr(va_arg(arg, unsigned int), len);
	else if (str == 'x')
		ft_ishexa(va_arg(arg, size_t), str, len);
	else if (str == 'X')
		ft_ishexa(va_arg(arg, size_t), str, len);
	else
		ft_putchar((char)va_arg(arg, int), len);
}
