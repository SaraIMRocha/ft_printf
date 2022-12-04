/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:24:49 by sara              #+#    #+#             */
/*   Updated: 2022/12/04 18:39:24 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == INT_MIN)
		ft_putstr("-2147483648", len);
	else if (nbr < 0)
	{
		ft_putchar("-", len);
		nbr *= -1;
		ft_putnbr(nbr, len);
	}
	else if (nbr > 9)
	{
		ft_putnbr((nbr / 10), len);
		ft_putnbr((nbr % 10), len);
	}
	else
		ft_putchar((nbr + 48), len);
}

void	ft_putunsnbr(unsigned int, int *len)
{
	if (nbr > 16)
	{
		ft_putunsnbr((nbr / 10), len);
		ft_putunsnbr((nbr % 16), len);
	}
	else
		ft_putchar((nbr + 48), len);
}