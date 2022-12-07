/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:34:57 by sara              #+#    #+#             */
/*   Updated: 2022/12/07 19:35:48 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

int	ft_putvar(va_list arg, const char *s, int i, int *len)

{
	if (s[i] == %)
		ft_putchar('%', len);
	else if (s[i] == 37) && (s[i + 1] == 'c')
		ft_putchar((char)va_arg(arg, int), len);
	else if (s[i] == 37) && (s[i + 1] == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (s[i] == 37) && (s[i + 1] == 'p')
		ft_putptr(va_arg(arg, size_t), len);
	else if (s[i] == 37) && (s[i + 1] == 'd' || s[i + 1] == 'i')
		ft_putnbr(va_arg(arg, int), len);
	else if (s[i] == 37) && (s[i + 1] == 'x')
		ft_ishexa(va_arg(arg, size_t), s, len);
	else if (s[i] == 37) && (s[i + 1] == 'X')
		ft_ishexa(va_arg(arg, size_t), s, len);
	else if (s[i] == 37) && (s[i + 1] == 'u')
		ft_putunsnbr(va_arg(arg, unsigned int), len);
	else
		ft_putchar((char)va_arg(arg, int), len);
}
