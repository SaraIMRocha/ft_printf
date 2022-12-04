/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:02:00 by sara              #+#    #+#             */
/*   Updated: 2022/12/04 18:28:42 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

void	ft_ishexap(size_t nbr, char hex, int *len);
{
	char *base;

	if(base == "X")
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar(nbr % 16);
	else
	{
		ft_ishexap((nbr / 16), len);
		ft_ishexap((nbr % 16), len);
	}
}