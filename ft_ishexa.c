/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:52:46 by sara              #+#    #+#             */
/*   Updated: 2023/01/04 01:38:56 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ishexa(unsigned int nbr, char hex, int *len)

{
	char	*base;

	if (hex == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar((base[nbr % 16]), len);
	else
	{
		ft_ishexa((nbr / 16), hex, len);
		ft_ishexa((nbr % 16), hex, len);
	}
}
