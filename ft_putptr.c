/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:16:55 by sara              #+#    #+#             */
/*   Updated: 2023/02/24 16:26:41 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	hexa_forp(size_t nbr, int *len)

{
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar((base[nbr % 16]), len);
	else
	{
		hexa_forp((nbr / 16), len);
		hexa_forp((nbr % 16), len);
	}
}

void	ft_putptr(const void *p, int *len)
{
	size_t	pointer;

	pointer = (size_t)p;
	if (pointer == 0)
	{
		*len += write(1, "(nil)", 5);
		return ;
	}
	ft_putstr("0x", len);
	hexa_forp(pointer, len);
}
