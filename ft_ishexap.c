/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:02:00 by sara              #+#    #+#             */
/*   Updated: 2022/12/07 19:24:23 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

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

void	ft_ishexap(const void *p, int *len)

{
	size_t	pointer;

	pointer = (size_t)p;
	if (pointer == 0)
	{
		*len += write(1, "(nil)", 5);
		return ;
	}
	ft_putstr("0x");
	hexa_forp(pointer, len);
}
